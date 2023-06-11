#include <stdio.h>
#include <stdlib.h>

int miniCapacityChecker(int *in, int *out, int len)
{
    int mincap = 0, temp = 0;
    for (int i = 0; i < len; i++)
    {
        temp = temp - in[i] + out[i];
        if (temp > mincap)
            mincap = temp;
    }
    return mincap;
}

int main()
{
    int tramStops, capacity;
    scanf("%d", &tramStops);
    
    int *in = malloc(tramStops * sizeof(int));
    int *out = malloc(tramStops * sizeof(int));
    
    for (int i = 0; i < tramStops; i++)
    {
        scanf("%d %d", &in[i], &out[i]);
    }
    
    capacity = miniCapacityChecker(in, out, tramStops);
    printf("%d\n", capacity);
    
    free(in);
    free(out);
    return 0;
}
