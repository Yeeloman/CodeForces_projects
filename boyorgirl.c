#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);

    int len = strlen(str);
    int count = 0;
    int chars[26] = {0};

    for (int i = 0; i < len; i++)
    {
        int index = str[i] - 'a';
        if (chars[index] == 0)
        {
            count++;
            chars[index] = 1;
        }
    }
    if (count % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

    return 0;
}


