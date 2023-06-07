#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int kidsnum, time;
  scanf("%d%d", &kidsnum, &time);
  char line[kidsnum + 1], temp;
  scanf("%s", line);
  for (int i = 0; i < time; i++)
  {
    int len = strlen(line);
    for (int j = 0; j < len; j++)
	  {
      if (line[j] == 'B' && line[j + 1] == 'G')
      {
        temp = line[j];
	      line[j] = line[j + 1];
        line[j + 1] = temp;
        j++;
      }
    }
  }
  printf("%s", line);
  return 0;
}
