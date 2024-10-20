#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <pwd.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

void logProgram ( char *progName )
{
  {
    ssize_t retval = 0;
    int logfile = -1;
#if LOGFILE
    logfile = open(LOGFILENAME, O_RDWR | O_CREAT | O_APPEND, 0666);
#endif
    if (logfile != -1)
    {
      char StrBuf[80];
      time_t temp;
      time(&temp);
      sprintf(StrBuf, "%s\t%s\t%s\n",
        ctime(&temp), progName, getpwuid(getuid())->pw_name);
      StrBuf[strlen(ctime(&temp))-1] = ' ';
      retval = write(logfile, StrBuf, strlen(StrBuf));
      if(0 > retval)
         printf("log: error writing to file %s\n", LOGFILENAME);
      close(logfile);
    }
  }
  return ;
}
