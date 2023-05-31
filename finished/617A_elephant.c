#include <stdio.h>
#include <stdlib.h>

int main()
{
	int distance;
	int steps[5] = {5,4,3,2,1};
	int minSteps = 0;
	scanf("%d", &distance);

	for (int i = 0; i < 5; i++)
	{
		while (distance >= steps[i])
		{
			minSteps++;
			distance -= steps[i];
		}
	}
	printf("%d", minSteps);
	return 0;
}