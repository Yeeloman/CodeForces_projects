#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int areDigitsDistinct(int number)
{
    int digitCount[10] = {0};
    
    while (number > 0)
	{
        int digit = number % 10; 
        if (digitCount[digit] > 0)
		{
            return 0;
        }
        
        digitCount[digit]++;
        number /= 10;
    }
    return 1;
}

int main()
{
	int year, beatiful_year, result;
	scanf("%d", &year);
	for (int i = 1; i < 9000; i++)
	{
		beatiful_year = year + i;
		result = areDigitsDistinct(beatiful_year);
		if (result == 1)
			break;
		else
			continue;
	}
	printf("%d", beatiful_year);
	return 0;
}