#include <stdio.h>
#include <stdlib.h>

int main()
{
	int pplnum, prob;
	scanf("%d", &pplnum);
	for (int i = 0; i < pplnum; i++)
	{
		scanf("%d", &prob);
		if (prob == 1)
		{
			printf("HARD");
			break;
		}
	}
	if (prob == 1)
		;
	else
		printf("EASY");
	return 0;
}