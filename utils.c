#include "utils.h"
#include <stdio.h>

void content(char* path, int chars)
{
   FILE *fh = fopen (path, "r");
   int izeichen = 0;
   
   if (fh != NULL)
   {
      printf ("\n\t%s\n\n", path);
      while (chars > 0) 
      {
         izeichen = fgetc (fh);
         if (izeichen == '\n')
         {
            chars --;
         }
         fputc (izeichen, stdout);
      }
      fclose (fh);
   }
   else 
   {
      fprintf (stderr, "%s kann nicht geoeffnet werden", path);
   }
}

void log_error(char* log_message, char* file_name, int line_number)
{
   printf(log_message, file_name, line_number);
}