#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int i, A[N], x, d;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < N; i++)
    {
        if (x == A[i])
        {
            d = i;
            break;
        }
        else
            d = -1;
    }
    printf("%d", d);
    return 0;
}
