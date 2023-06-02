#include <stdio.h>
#include <stdlib.h>

int main()
{
	int gameNum, anton = 0, danik = 0;
	scanf("%d", &gameNum);
	char outcome[gameNum];
	scanf("%s", outcome);
	for (int i = 0; i < gameNum; i++)
	{
		if (outcome[i] == 'A')
			anton++;
		if (outcome[i] == 'D')
			danik++;
	}
	if (anton > danik)
		printf("Anton\n");
	else if (danik > anton)
		printf("Danik\n");
	else
		printf("Friendship");
	return 0;
}