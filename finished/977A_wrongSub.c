#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int zeroChecker(int number)
{
    char str[100];
    sprintf(str, "%d", number);
    char lastDigit = str[strlen(str) - 1];
    if (lastDigit == 48)
    	return 0;
    else
    	return 1;
    return 0;
}
int main()
{
	int num, sub;
	scanf("%d%d", &num, &sub);

	for (int i = 0; i < sub; i++)
	{
		int checker = zeroChecker(num);
		if (checker == 0)
			num /= 10;
		else
			num -= 1;	
	}
	printf("%d", num);
	return 0;
}