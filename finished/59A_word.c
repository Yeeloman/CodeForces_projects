#include <stdio.h>
#include <stdlib.h>


char *upperWord(char *str)
{
	char *originalstr = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (originalstr);
}
char *lowerWord(char *str)
{
	char *originalstr = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
	return (originalstr);
}

int caseChecker(char *str)
{
	int up = 0, low = 0;

	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			up++;
		else
			low++;
		str++;
	}
	if (up > low)
		return 1;
	else if (up < low)
		return -1;
	else
		return 0;
	return 0;
}
int main()
{
	int cases;
	char word[100];
	char *modifiedWord;
	scanf("%s", word);
	cases = caseChecker(word);
	if (cases == 1)
		modifiedWord = upperWord(word);
	else if (cases == -1)
		modifiedWord = lowerWord(word);
	else
		modifiedWord = lowerWord(word);
	printf("%s", modifiedWord);
	return 0;
}