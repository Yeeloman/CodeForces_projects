#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    scanf("%s", s);
    int len = strlen(s);
    if (s[0] >= 97 && s[0] <= 122)
    {
        s[0] = s[0] - 32;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%c", s[i]);
    }
    return 0;
}