#include <stdio.h>

char strings[] = "Now I need a drink, alcoholic of course, after the heavy lectures involving quantum mechanics.";
int strings_length = ( sizeof strings / sizeof(char)  );
int count,arraypos;

int main()
{
  int wordscount[15];
  count = 0;
  arraypos = 0;
  for(int i = 0; i < strings_length; i++)
    {
      if( strings[i] == ' ' || strings[i] == '.')
	{
	  wordscount[arraypos] = count;
	  count = 0;
	  arraypos++;
	}
      else if( strings[i] == ',' || strings[i] == '.' )
	{
	}
      else
	{
	  count++;
	}
    }
  for(int k = 0; k < sizeof wordscount/sizeof(int); k++)
    {
    printf("%d ", wordscount[k]);
    }
  printf("\n");
  return 0;
}

