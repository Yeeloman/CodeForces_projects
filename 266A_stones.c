#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	int removeStone = 0;
	scanf("%d", &n);
	char stones[n];
	scanf("%s", stones);

	for (int i = 0; i < n; i++)
	{
		if (stones[i] == stones[i + 1])
			removeStone++;
	}
	printf("%d\n", removeStone);
	return 0;
}