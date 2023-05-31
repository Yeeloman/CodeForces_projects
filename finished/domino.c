#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int i;
    int count = 0;
    int mul = m * n;
    for (i = 2; i <= mul; i += 2)
    {
        count++;
    }
    printf("%d\n", count);
    return 0;
}