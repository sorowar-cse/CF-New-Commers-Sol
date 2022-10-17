#include <stdio.h>
int main()
{
    long long int a[50], i, N;
    scanf("%lld", &N);
    a[0] = 0;
    a[1] = 1;

    for (i = 2; i < N; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (i = 0; i < N; i++)
    {
        if (i == N - 1)
        {
            printf("%lld\n", a[i]);
        }
    }
    return 0;
}