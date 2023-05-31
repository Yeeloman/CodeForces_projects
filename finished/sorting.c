#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleSort(int *num, int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
}

int main()
{
    char s[100];
    scanf("%s", s);

    int size = strlen(s);
    int num[100];
    int i = 0;
    int n = 0;
    int k = 0;

    for (int j = 0; s[j] != '\0'; j++)
    {
        if (s[j] != '+')
        {
            num[i] = atoi(&s[j]);
            i++;
        }
    }
    for (i = 0; num[i]; i++)
    {
        n++;
    }

    bubbleSort(num, n);
    printf("%d", num[0]);
    for (int i = 1; i < n; i++)
    {
        printf("+%d", num[i]);
    }
    return 0;
}
