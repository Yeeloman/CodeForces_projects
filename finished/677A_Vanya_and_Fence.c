#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    int frnds, height, width = 0, eachfrnd;
    scanf("%d%d", &frnds, &height);
    for (int i = 0; i < frnds; i++)
    {
        scanf("%d", &eachfrnd);
        if (eachfrnd > height)
            width += 2;
        else
            width += 1;
    }
    printf("%d", width);
    return 0;
}