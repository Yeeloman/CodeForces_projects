#include <stdio.h>
#include <stdlib.h>

int main()
{
	int frnds;
	scanf("%d", &frnds);
	int giftreciever[frnds];
	for (int i = 0; i < frnds; i++)
	{
		scanf("%d", &giftreciever[i]);
	}
	int giftgiver[frnds];
	for (int i = 0; i < frnds; i++)
		giftgiver[giftreciever[i] - 1] = i + 1;
	for (int i = 0; i < frnds; i++)	
		printf("%d ", giftgiver[i]);
	return 0;
}