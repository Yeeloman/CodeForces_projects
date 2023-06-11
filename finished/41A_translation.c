#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int revCHecker(char *str1, char *str2)
{
	int len = strlen(str2);
	int i, j = 0;
	for (i = len - 1; i >= 0 && j < len; i--, j++)
	{
		if (str1[j] != str2[i])
			return -1;
	}
	return 0;
}
int main()
{
	char word[100], revWord[100];
	int checker;
	scanf("%s", word);
	scanf("%s", revWord);
	checker = revCHecker(word, revWord);
	if (checker == 0)
		printf("YES");
	else
		printf("NO");
    return 0;
}