#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2, year = 0;

	scanf("%d%d", &num1, &num2);
	while (num1 <= num2)
	{
		year++;
		num1 *= 3;
		num2 *= 2;
	}
	printf("%d\n", year);
	return 0;
}