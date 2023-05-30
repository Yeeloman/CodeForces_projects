#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cost, moneyAmount, banana_num,borrow  =0, total = 0;

	scanf("%d%d%d", &cost, &moneyAmount, &banana_num);
	for (int i = 1; i <= banana_num; i++)
	{
		total += cost * i;
	}
	if (total > moneyAmount)
		borrow = total - moneyAmount;
	printf("%d", borrow);
	return 0;
}