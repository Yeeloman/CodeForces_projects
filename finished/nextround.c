#include <stdio.h>

int main()
{
    int n, k, i, t;
    int next_round = 0;
    scanf("%d%d", &n, &k);
    int score[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &score[i]);
    }
    for (t = 0; t < n; t++)
    {
        if (score[t] >= score[k - 1] && score[t] > 0)
        {
            next_round++;
        }
    }
    printf("%d\n", next_round);
    return 0;
}
