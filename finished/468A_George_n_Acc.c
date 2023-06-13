#include <stdio.h>
#include <stdlib.h>

int main()
{
	int roomNum;
	scanf("%d", &roomNum);
	int pplliving, max, okaytomove = 0;
	for (int i = 0; i < roomNum; i++)
	{
		scanf("%d%d", &pplliving, &max);
		if (max - pplliving >= 2)
			okaytomove++;
	}
	printf("%d", okaytomove);
    return 0;
}