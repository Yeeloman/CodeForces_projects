#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[100];
    char str2[100];
    scanf("%s%s", str1, str2);
    int i, j;
    for (i = 0; i < strlen(str1); i++)
    {
        if (str1[i] >= 65 && str1[i] <= 90)
        {
            str1[i] = str1[i] + 32;
        }
    }
    for (j = 0; j < strlen(str2); j++)
    {
        if (str2[j] >= 65 && str2[j] <= 90)
        {
            str2[j] = str2[j] + 32;
        }
    }
    int result = strcmp(str1, str2);
    printf("%d", result);
    return 0;
}