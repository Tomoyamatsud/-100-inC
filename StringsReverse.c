#include <stdio.h>

char strings[] = "stressed";

int  main()
{
  int stringslength = ( (sizeof strings)/(sizeof(char)) );

  for( int n = stringslength; n >= 0; n-- )
    {
      printf("%c", strings[n]);
    }
  printf("\n");
  return(0);
}
