#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int LuckyNumChecker(char *str)
{
	int lucky = 0;
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i] == 52 || str[i] == 55)
			lucky++;
	}
	return (lucky);
}

int finalCheck(int luckyNum)
{
	int error = 0;
	char str[20];
	memset(str, '\0', sizeof(str));
	sprintf(str, "%d", luckyNum);
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i] != 52 && str[i] != 55)
			error++;
	}
	return error;
}
int main()
{
	char input[20];
	int luckynum, check;

	scanf("%s", input);
	luckynum = LuckyNumChecker(input);
	check = finalCheck(luckynum);
	if (check == 0)
		printf("YES");
	else
		printf("NO");
	return 0;
}