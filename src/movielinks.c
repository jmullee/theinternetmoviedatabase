/*============================================================================
 *
 *  Program: movielink.c
 *
 *  Version: 3.1
 *
 *  Purpose: movie links procedures
 *
 *  Author:  C J Needham <col@imdb.com>
 *
 *  Copyright (c) 1996 The Internet Movie Database Ltd.
 *
 *  Permission is granted by the copyright holder to distribute this program
 *  is source form only, providing this notice remains intact, and no fee
 *  of any kind is charged. This software is provided as is and there are no
 *  warranties, expressed or implied.
 *
 *============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moviedb.h"
#include "dbutils.h"

void freeMovieLinks ( int noOfEntries, struct movieLinkRec *rec )
{
  int i ;

  for ( i = 0 ; i < noOfEntries ; i++ )
    free ( (void*) rec [ i ] . title ) ;
  free ( (void*) rec ) ;
}


struct movieLinkRec *readMovieLinks ( FILE *dbFp, TitleID searchKey, int *count )
{
  struct movieLinkRec data [ MAXLINKSPERMOVIE ] ;
  struct movieLinkRec *retval ;
  TitleID titleKey = searchKey ;

  *count = 0 ;
  titleKey = getTitle ( dbFp ) ;
  while ( feof ( dbFp ) == 0 && titleKey == searchKey )
  {
    data [ *count ] . link = getByte ( dbFp ) ;
    data [ *count ] . titleKey = getTitle ( dbFp ) ;
    data [ *count ] . title = NULL ;
    (*count)++ ;
    titleKey = getTitle ( dbFp ) ;
  }
  if ( ( retval = calloc ( *count, sizeof ( struct movieLinkRec ) ) ) != NULL )
  {
    memcpy ( retval, data, *count * sizeof ( struct movieLinkRec ) ) ;
    return ( retval ) ;
  }
  else
  {
    *count = 0 ;
    return ( NULL ) ;
  }
}


struct movieLinkRec *findMovieLinks ( FILE *dbFp, TitleID titleKey, int *count )
{
  long upper, lower, mid = 0 ;
  int found = FALSE ;
  TitleID dbTitleKey = NOTITLE ;

  (void) fseek ( dbFp, 0, SEEK_END ) ;
  upper = ftell ( dbFp ) / 7 ;
  lower = 0 ;
  found = FALSE ;
  while ( !found && upper >= lower )
  {
    mid = ( upper + lower ) / 2 ;
    (void) fseek ( dbFp, mid * 7, SEEK_SET ) ;
    dbTitleKey = getTitle ( dbFp ) ;
    if ( titleKey == dbTitleKey )
      found = TRUE ;
    else if ( dbTitleKey < titleKey )
      lower = mid + 1 ;
    else
      upper = mid - 1 ;
  }
  if ( found )
  {
    if ( mid == 0 )
      (void) fseek ( dbFp, 0, SEEK_SET ) ;
    else
    {
      while ( titleKey == dbTitleKey )
      {
        if ( --mid >= 0 )
        {
          (void) fseek ( dbFp, mid * 7, SEEK_SET ) ;
          dbTitleKey = getTitle ( dbFp ) ;
        }
        else
          break ;
      }
      if ( mid >= 0 )
      {
        (void) getByte ( dbFp ) ;
        (void) getTitle ( dbFp ) ;
      }
      else
        (void) fseek ( dbFp, 0, SEEK_SET ) ;
    }
    return ( readMovieLinks ( dbFp, titleKey, count ) ) ;
  }
  else
    return ( NULL ) ;
}


void addMovieLinksToTitleSearch ( struct titleSearchRec *tchain )
{
  FILE  *dbFp ;
  struct titleSearchRec *trec ;

  dbFp = openFile ( LINKDB ) ;
  for ( trec = tchain ; trec != NULL ; trec = trec -> next )
  {
    if ( trec -> searchparams . linkopt )
      trec -> links = findMovieLinks ( dbFp, trec -> titleKey, &(trec -> noOfLinks) ) ;
  }
  (void) fclose ( dbFp ) ;
}
