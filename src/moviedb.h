/*============================================================================
 *
 *  Program: moviedb.h
 *
 *  Version: 3.4a
 *
 *  Purpose: general constant and type definitions for movie database
 *
 *  Author:  C J Needham <cn@imdb.com>
 *
 *  Copyright (c) 1996-1998 The Internet Movie Database Ltd
 *
 *  Permission is granted by the copyright holder to distribute this program
 *  is source form only, providing this notice remains intact, and no fee
 *  of any kind is charged. This software is provided as is and there are no
 *  warranties, expressed or implied.
 *
 *============================================================================
 */

#define   MXLINELEN               500
#define   FSEP                    '|'
#define   MAXZCATARGS              10
#define   MAXLSEEN              65534
#define   MAXTITLES            300000
#define   MAXATTRS              65500
#define   MAXFILMOGRAPHIES       1023
#define   MAXWITHATTRS           4095
#define   MAXTITLERESULTS        4095
#define   MAXALISTRESULTS        5000
#define   MAXALISTTITLES         3000
#define   NOTITLE            0xffffff
#define   NOATTR               0xffff
#define   NONAME           0xffffffff
#define   NOPOS                     0
#define   MAXTRIVENTRIES        30000
#define   MAXPLOTENTRIES        50000
#define   MAXLITENTRIES         20000
#define   MAXLDENTRIES          25000
#define   MAXBUSENTRIES         20000
#define   MAXBIOENTRIES         80000
#define   MAXMRRENTRIES         40000
#define   MAXAKAENTRIES        100000
#define   MAXNAKAENTRIES        40000
#define   MAXTITLEINFO         300000
#define   MAXPOS                  255
#define   MAXLINKS             200000
#define   MAXLINKSPERMOVIE        250

#ifndef DBDIR
#define   DBDIR
#define   RAWDIR
#define   ETCDIR
#endif

#define DBSEXT  "data"
#define NDXEXT  "names"
#define TDXEXT  "titles"

#define   MRRDB       DBDIR "ratings.data"
#define   AKADB       DBDIR "aka-titles.data"
#define   NAKADB      DBDIR "aka-names.data"
#define   MOVIEDB     DBDIR "movies.data"
#define   TIMESDB     DBDIR "running-times.data"
#define   CERTDB      DBDIR "certificates.data"
#define   GENREDB     DBDIR "genres.data"
#define   CNTRYDB     DBDIR "countries.data"
#define   PRODCODB    DBDIR "production-companies.data"
#define   DISTDB      DBDIR "distributors.data"
#define   SFXCODB     DBDIR "special-effects-companies.data"
#define   COLORDB     DBDIR "color-info.data"
#define   MIXDB       DBDIR "sound-mix.data"
#define   PLOTDB      DBDIR "plot.data"
#define   BIODB       DBDIR "biographies.data"
#define   VOTEDB      DBDIR "votes.data"
#define   RELDB       DBDIR "release-dates.data"
#define   LOCDB       DBDIR "locations.data"
#define   TECHDB      DBDIR "technical.data"
#define   LITDB       DBDIR "literature.data"
#define   LDDB        DBDIR "laserdisc.data"
#define   BUSDB       DBDIR "business.data"
#define   TAGDB       DBDIR "taglines.data"
#define   CASTCOMDB   DBDIR "complete-cast.data"
#define   CREWCOMDB   DBDIR "complete-crew.data"
#define   LINKDB      DBDIR "movie-links.data"
#define   LANGDB      DBDIR "language.data"

#define   TRIVIADB    DBDIR "trivia.data"
#define   CRAZYDB     DBDIR "crazy-credits.data"
#define   QUOTEDB     DBDIR "quotes.data"
#define   STRAKDB     DBDIR "soundtracks.data"
#define   GOOFDB      DBDIR "goofs.data"
#define   VERSDB      DBDIR "alternate-versions.data"

#define   ACRSTEM     DBDIR "actors"
#define   ACSSTEM     DBDIR "actresses"
#define   DIRSTEM     DBDIR "directors"
#define   WRITESTEM   DBDIR "writers"
#define   COMPSTEM    DBDIR "composers"
#define   CINESTEM    DBDIR "cinematographers"
#define   EDITSTEM    DBDIR "editors"
#define   PDESSTEM    DBDIR "production-designers"
#define   CDESSTEM    DBDIR "costume-designers"
#define   PRDCRSTEM   DBDIR "producers"
#define   MISCSTEM    DBDIR "miscellaneous"

#define   TITLEIDX    DBDIR "titles.index"
#define   ATTRIDX     DBDIR "attributes.index"
#define   NAMEIDX     DBDIR "names.index"

#define   TITLEKEY    DBDIR "titles.key"
#define   ATTRKEY     DBDIR "attributes.key"
#define   NAMEKEY     DBDIR "names.key"

#define   KEYCOUNTS   DBDIR "key.counts"

#define   BIOIDX      DBDIR "biographies.index"
#define   AKAIDX      DBDIR "aka-titles.index"
#define   NAKAIDX     DBDIR "aka-names.index"
#define   PLOTIDX     DBDIR "plot.index"
#define   LITIDX      DBDIR "literature.index"
#define   LDIDX       DBDIR "laserdisc.index"
#define   BUSIDX      DBDIR "business.index"
#define   TAGIDX      DBDIR "taglines.index"

#define   CRAZYIDX  DBDIR "crazy-credits.index"
#define   TRIVIDX   DBDIR "trivia.index"
#define   QUOTEIDX  DBDIR "quotes.index"
#define   STRAKIDX  DBDIR "soundtracks.index"
#define   GOOFIDX   DBDIR "goofs.index"
#define   VERSIDX   DBDIR "alternate-versions.index"

#define   CERTIDX   DBDIR "certificates.index"
#define   GENREIDX  DBDIR "genres.index"
#define   CNTRYIDX  DBDIR "countries.index"
#define   TIMESIDX  DBDIR "running-times.index"
#define   PRODCOIDX DBDIR "production-companies.index"
#define   DISTIDX   DBDIR "distributors.index"
#define   SFXCOIDX  DBDIR "special-effects-companies.index"
#define   COLORIDX  DBDIR "color-info.index"
#define   MIXIDX    DBDIR "sound-mix.index"
#define   RELIDX    DBDIR "release-dates.index"
#define   LOCIDX    DBDIR "locations.index"
#define   TECHIDX   DBDIR "technical.index"
#define   LANGIDX   DBDIR "language.index"

#define   BIODEFS   ETCDIR "biodefs"

#define   ACRLIST      RAWDIR "actors.list"
#define   ACSLIST      RAWDIR "actresses.list"
#define   DIRLIST      RAWDIR "directors.list"
#define   WRITELIST    RAWDIR "writers.list"
#define   COMPLIST     RAWDIR "composers.list"
#define   CINELIST     RAWDIR "cinematographers.list"
#define   MRRLIST      RAWDIR "ratings.list"
#define   AKALIST      RAWDIR "aka-titles.list"
#define   TRIVIA       RAWDIR "trivia.list"
#define   PLOTLIST     RAWDIR "plot.list"
#define   CRAZYLIST    RAWDIR "crazy-credits.list"
#define   BIOLIST      RAWDIR "biographies.list"
#define   EDITLIST     RAWDIR "editors.list"
#define   PDESLIST     RAWDIR "production-designers.list"
#define   CDESLIST     RAWDIR "costume-designers.list"
#define   MOVIELIST    RAWDIR "movies.list"
#define   TIMESLIST    RAWDIR "running-times.list"
#define   VOTELIST     RAWDIR "votelog"
#define   QUOTELIST    RAWDIR "quotes.list"
#define   STRAKLIST    RAWDIR "soundtracks.list"
#define   GOOFLIST     RAWDIR "goofs.list"
#define   PRDCRLIST    RAWDIR "producers.list"
#define   MISCLIST     RAWDIR "miscellaneous.list"
#define   NAKALIST     RAWDIR "aka-names.list"
#define   CERTLIST     RAWDIR "certificates.list"
#define   GENRELIST    RAWDIR "genres.list"
#define   CNTRYLIST    RAWDIR "countries.list"
#define   PRODCOLIST   RAWDIR "production-companies.list"
#define   SFXCOLIST    RAWDIR "special-effects-companies.list"
#define   COLORLIST    RAWDIR "color-info.list"
#define   MIXLIST      RAWDIR "sound-mix.list"
#define   RELLIST      RAWDIR "release-dates.list"
#define   LOCLIST      RAWDIR "locations.list"
#define   TECHLIST     RAWDIR "technical.list"
#define   LITLIST      RAWDIR "literature.list"
#define   LDLIST       RAWDIR "laserdisc.list"
#define   BUSLIST      RAWDIR "business.list"
#define   TAGLIST      RAWDIR "taglines.list"
#define   CASTCOMLIST  RAWDIR "complete-cast.list"
#define   CREWCOMLIST  RAWDIR "complete-crew.list"
#define   LINKLIST     RAWDIR "movie-links.list"
#define   VERSLIST     RAWDIR "alternate-versions.list"
#define   LANGLIST     RAWDIR "language.list"
#define   DISTLIST     RAWDIR "distributors.list"

#define   TRUE      1
#define   FALSE     0

#define   NO_OF_FILMOGRAPHY_LISTS   11
#define   NO_OF_CAST_LISTS           2
#define   NO_OF_CHAR_LISTS           2
#define   NO_OF_SEARCH_OPTS         13
#define   GLOBAL_NAME_SEARCH        12
#define   WRITER_LIST_ID             3
#define   NO_OF_TRIV_LISTS           7
#define   NO_OF_TITLE_INFO_LISTS    13

#define   ACRSRCH     0
#define   ACSSRCH     1
#define   DIRSRCH     2
#define   WRITESRCH   3
#define   COMPSRCH    4
#define   CINESRCH    5
#define   EDITSRCH    6
#define   PDESSRCH    7
#define   CDESSRCH    8
#define   PRDCRSRCH   9
#define   MISCSRCH   10

#define   NONE   0
#define   MRR    1
#define   SMRR   2
#define   VMRR   3

#define   YR     1
#define   YRU    2

#define  MV_STATE        0
#define  PL_STATE        1

#define  TITLE_KEY    "MV"
#define  PLOT_KEY     "PL"
#define  BY_KEY       "BY"
#define  REVIEW_KEY   "RV"

#define  PERSON_STATE    0
#define  BIO_STATE       1

#define  NAME_KEY       "NM"
#define  REALNAME_KEY   "RN"
#define  BIRTHDATE_KEY  "DB"
#define  DEATHDATE_KEY  "DD"
#define  BIO_KEY        "BG"
#define  AUTHOR_KEY     "BY"

#define  MAXBIODEFS      25

#define  TRIVTITLE "# "

#include <sys/param.h>
#ifndef MAXPATHLEN
#  define MAXPATHLEN 300
#endif

#ifndef SEEK_SET
#  define SEEK_SET 0
#  define SEEK_CUR 1
#  define SEEK_END 2
#endif

enum titleInfoDisplays { stdDisplay, techDisplay, mergeDisplay } ;

enum compCastStatus { unknown, completed, verified } ;

#define NO_OF_LINK_TYPES  18

enum movieLinkTypes { followsLink, followedByLink,
                      remakeOfLink, remadeAsLink,
                      referencesLink, referencedInLink,
                      spoofsLink, spoofedInLink,
                      featuresLink, featuredInLink,
                      spinOffFromLink, spinOffLink,
                      versionOfLink,
                      similarToLink,
                      editedIntoLink, editedFromLink,
                      alternateLanguageVersionOfLink,
                      unknownLink } ;

#ifndef __alpha
typedef unsigned int AttributeID ;
typedef unsigned long TitleID ;
typedef unsigned long NameID ;
#else
typedef unsigned int AttributeID ;
typedef unsigned int TitleID ;
typedef unsigned int NameID ;
#endif

struct movieLinksDefRec
{
  enum movieLinkTypes link ;
  char                *string ;
  int                 length ;
} ;

struct movieLinkDbRec
{
  TitleID             fromTitleKey ;
  enum movieLinkTypes link ;
  TitleID             toTitleKey ;
  int                 position ;
} ;

struct movieLinkRec
{
  TitleID             titleKey ;
  enum movieLinkTypes link ;
  unsigned char       *title ;
} ;

struct compCastRec
{
  TitleID              titleKey ;
  enum compCastStatus  status ;
} ;


struct laserRec
{
  char             *LN ;
  char             *LB ;
  char             *CN ;
  char             *LT ;
  struct lineRec   *misc ;
  struct laserRec  *next ;
} ;


struct personRec
{
  struct bioRec     *biography ;
  char              *RN ;
  char              *DB ;
  char              *DD ;
  struct bioMiscRec *misc ;
} ;


struct bioRec
{
  char           *biog ;
  char           *BY ;
  struct bioRec  *next ;
} ;


struct bioMiscRec
{
  struct lineRec  *list ;
  char             label [ 2 ] ;
  struct bioMiscRec *next ;
} ;


struct outlineRec
{
  char *PL ;
  char *BY ;
  struct outlineRec *next ;
} ;


struct lineRec
{
  char            *text ;
  struct lineRec *next ;
}  ;


struct titleInfoRec
{
  AttributeID     attrKey ;
  char            *text ;
  char            *attr ;
  struct titleInfoRec *next ;
}  ;


struct plotRec
{
  struct outlineRec *outline ;
  char              *RV ;
} ;


struct triviaRec
{
  int             count ;
  struct lineRec *trivia ;
} ;


struct titleOrderRec
{
  int  listId ;
  char *tag ;
  char *description ;
  char *pluralDesc ;
} ;


struct filmographyOptRec
{
  char   *option ;
  char   *oldOption ;
  int    listflags [ NO_OF_FILMOGRAPHY_LISTS ] ;
} ;


struct filmographyDefRec
{
  char   *option ;
  char   *stem ;
  char   *list ;
  char   *filmography ;
  int    listid ;
  char   *class ;
  char   *desc ;
} ;


struct triviaDefRec
{
  char   *option ;
  char   *list ;
  char   *db ;
  char   *index ;
  char   *desc ;
  char   *start ;
} ;


struct titleInfoDefRec
{
  char                    *option ;
  char                    *list ;
  char                    *db ;
  char                    *index ;
  char                    *desc ;
  char                    *tag ;
  char                    *start ;
  enum titleInfoDisplays  displayFormat ;
} ;


struct mrrRec
{
  char   distribution [11] ;
  int    votes ;
  float  rating ;
} ;


struct akaRec
{
  TitleID  akaKey ;
  AttributeID  akaAttrKey ;
  char *akaTitle ;
  char *akaAttr ;
  struct akaRec *next ;
} ;


struct akaNameRec
{
  NameID  akaKey ;
  char *akaName ;
  struct akaNameRec *next ;
} ;


struct titleResults
{
  int  count ;
  int  base ;
} ;


struct titleListEntry
{
  NameID nameKey ;
  AttributeID  attrKey ;
  char *name ;
  char *attr ;
  char *cname ;
  int position ;
  int lineOrder ;
  int groupOrder ;
  int subgroupOrder ;
} ;


struct titleSearchOptRec
{
  unsigned int casesen : 1 ;
  unsigned int akaopt : 1 ;
  unsigned int chopt : 1 ;
  unsigned int mrropt : 1 ;
  unsigned int yropt : 1 ;
  unsigned int plotopt : 1 ;
  unsigned int substring : 1 ;
  unsigned int yearMatch : 1 ;
  unsigned int litopt : 1 ;
  unsigned int linkopt : 1 ;
  unsigned int businessopt : 1 ;
  unsigned int ldopt : 1 ;
} ;


struct titleSearchRec
{
  unsigned char            *title ;
  TitleID                  titleKey ;
  struct titleSearchOptRec searchparams ;
  int                      trivflags [ NO_OF_TRIV_LISTS ] ;
  int                      titleInfoFlags [ NO_OF_TITLE_INFO_LISTS ] ;
  int                      nameCount ;
  struct titleResults      results [ NO_OF_FILMOGRAPHY_LISTS ] ;
  struct titleListEntry    entries [ MAXTITLERESULTS ] ;
  struct lineRec           *trivlists [ NO_OF_TRIV_LISTS ] ;
  struct titleInfoRec      *titleInfo [ NO_OF_TITLE_INFO_LISTS ] ;
  int                      year ;
  AttributeID              attrKey ;
  char                     *attr ;
  enum compCastStatus      castStatus ;
  enum compCastStatus      crewStatus ;
  struct mrrRec            *mrr ;
  struct akaRec            *aka ;
  struct plotRec           *plot ;
  struct lineRec           *literature ;
  struct lineRec           *business ;
  struct laserRec          *laserdisc ;
  int                      noOfLinks ;
  struct movieLinkRec      *links ;
  struct titleSearchRec    *next ;
} ;


struct listEntry
{
  TitleID       titleKey ;
  AttributeID   attrKey ;
  int           position ;
  int           lineOrder ;
  int           groupOrder ;
  int           subgroupOrder ;
  char          *title ;
  char          *attr ;
  char          *cname ;
  int           year ;
  struct akaRec *aka ;
  struct mrrRec *mrr ;
} ;


struct listRec
{
   int              count ;
   struct listEntry entries [ MAXFILMOGRAPHIES ] ;
} ;


struct nameSearchOptRec
{
  unsigned int approx : 4 ;
  unsigned int mrropt : 2 ;
  unsigned int yropt : 2 ;
  unsigned int searchall : 1 ;
  unsigned int casesen : 1 ;
  unsigned int substring : 1 ;
  unsigned int mvsonly : 1 ;
  unsigned int chopt : 1 ;
  unsigned int biopt : 1 ;
  unsigned int akaopt : 1 ;
} ;


struct nameSearchRec
{
  unsigned char           *name ;
  NameID                  nameKey ;
  struct nameSearchOptRec searchparams ;
  int                     searchFlags [ NO_OF_FILMOGRAPHY_LISTS ] ;
  int                     firstMatch ;
  struct listRec          *lists  [ NO_OF_FILMOGRAPHY_LISTS ] ;
  struct akaNameRec       *aka ;
  struct personRec        *biography ;
  struct nameSearchRec    *next ;
} ;


struct attrSearchOptRec
{
  unsigned int string : 1 ;
  unsigned int aa : 1 ;
  unsigned int aan : 1 ;
  unsigned int gg : 1 ;
  unsigned int ggn : 1 ;
} ;


struct alistTitleRes
{
  char *title ;
  char *attr ;
  int  year ;
} ;


struct alistResult
{
  char *name ;
  char *title ;
  char *attr ;
  int  year ;
} ;


struct titleDbRec
{
  TitleID  titleKey ;
  int      year ;
} ;


struct mrrDbRec
{
  TitleID       titleKey ;
  struct mrrRec mrr ;
} ;


struct voteDbRec
{
  TitleID titleKey ;
  int  vote ;
} ;


struct lindexRec
{
  FILE   *fp ;
  int    listId ;
  char   name [ MXLINELEN ] ;
} ;


struct lindexTitleRec
{
  unsigned char  *title ;
  struct mrrRec  mrr ;
  int            year ;
} ;


struct formatRec
{
   char          *name ;
   char          *title ;
   char          *attr ;
   NameID        nameKey ;
   TitleID       titleKey ;
   AttributeID   attrKey ;
   int           year ;
   struct mrrRec mrr ;
} ;


struct lseenCount
{
   NameID nameKey ;
   char   *name ;
   int    count ;
   long   offset ;
} ;



struct titleIndexRec
{
  unsigned char   *title ;
  TitleID         titleKey ;
} ;


struct attrIndexRec
{
  unsigned char    *attr ;
  AttributeID      attrKey ;
} ;


struct nameIndexRec
{
  unsigned char *name ;
  NameID  nameKey ;
} ;


struct attrKeyOffset
{
  AttributeID  attrKey ;
  long         offset ;
} ;


struct titleKeyOffset
{
  TitleID  titleKey ;
  long     offset ;
} ;


struct nameKeyOffset
{
  NameID  nameKey ;
  long    offset ;
} ;


struct titleAttrPair
{
  TitleID     titleKey ;
  AttributeID attrKey ;
} ;


struct filmography
{
  NameID               nameKey ;
  int                  noWithAttr ;
  int                  noWithoutAttr ;
  struct titleAttrPair withAttrs [ MAXFILMOGRAPHIES ] ;
  TitleID              withoutAttrs [ MAXFILMOGRAPHIES ] ;
} ;


struct titleCharPair
{
  TitleID     titleKey ;
  char        *cname ;
  int         position ;
} ;

struct titleAttrChar
{
  TitleID     titleKey ;
  AttributeID attrKey ;
  char        *cname ;
  int         position ;
} ;


struct castFilmography
{
  NameID               nameKey ;
  int                  noWithAttr ;
  int                  noWithoutAttr ;
  struct titleAttrChar withAttrs [ MAXFILMOGRAPHIES ] ;
  struct titleCharPair withoutAttrs [ MAXFILMOGRAPHIES ] ;
} ;


struct titleWritePair
{
  TitleID     titleKey ;
  int         lineOrder ;
  int         groupOrder ;
  int         subgroupOrder ;
} ;


struct titleAttrWrite
{
  TitleID     titleKey ;
  AttributeID attrKey ;
  int         lineOrder ;
  int         groupOrder ;
  int         subgroupOrder ;
} ;


struct writerFilmography
{
  NameID               nameKey ;
  int                  noWithAttr ;
  int                  noWithoutAttr ;
  struct titleAttrWrite withAttrs [ MAXFILMOGRAPHIES ] ;
  struct titleWritePair withoutAttrs [ MAXFILMOGRAPHIES ] ;
} ;


struct corrections
{
  char  *original ;
  char  *corrected ;
} ;


struct mrrData
{
  TitleID  titleKey ;
  char     distribution[11] ;
  int      votes ;
  int      rating ;
} ;


struct yearData
{
  TitleID     titleKey ;
  int         yrfrom ;
  int         yrto ;
  AttributeID attrKey ;
} ;


struct voteData
{
  TitleID   titleKey ;
  int       vote ;
} ;


struct akaData
{
  TitleID   primary ;
  TitleID   aka ;
  AttributeID attrKey ;
} ;


struct akaNameData
{
  char *akaString ;
  NameID   primary ;
  NameID   aka ;
} ;


struct titleInfoData
{
  TitleID      titleKey ;
  char*        value ;
  AttributeID  attrKey ;
  int          order ;
} ;


struct searchConstraints
{
  int  caseSen ;
  int  moviesOnly ;
  int  mrrMatch ;
  int  yearFrom ;
  int  yearTo ;
  int  voteMin ;
  int  voteMax ;
  char subString [ MXLINELEN ] ;
  char titleInfoString [NO_OF_TITLE_INFO_LISTS] [ MXLINELEN ] ;
} ;
