#include <stdio.h>
#include <stdlib.h>

int main()
{
	int magnetsNum, magnetGrp = 0;
	scanf("%d", &magnetsNum);
	int  magnet[magnetsNum];
	for (int i = 0; i < magnetsNum; i++)
	{
		scanf("%d", &magnet[i]);
	}
	for (int i = 0; i < magnetsNum; i++)
	{
		if (magnet[i] != magnet[i + 1])
			magnetGrp++;
	}
	printf("%d", magnetGrp);
	return 0;
}