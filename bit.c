#include <stdio.h>
#include <string.h>

int what_op(char op[])
{
    int outcome;
    if (strcmp(op, "++X") == 0)
        {
           outcome = 1;
        } 
        else if (strcmp(op, "X++") == 0) 
        {
            outcome = 2;
        } 
        else if (strcmp(op, "--X") == 0) 
        {
            outcome = 3;
        } 
        else if (strcmp(op, "X--") == 0) 
        {
            outcome = 4;
        } 
        else 
        {
            printf("invalid op");
        }
        return outcome;
}

int main()
{
    int x = 0;
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        char op[4];
        scanf("%s", op);
        switch (what_op(op))
        {
        case 1:
            ++x;
            break;
        case 2:
            x++;
            break;
        case 3:
            --x;
            break;
        case 4:
            x--;
            break;
        default:
        printf("invalid op");
            break;
        }
    }
    printf("%d", x);
    return 0;
}
