#include <stdio.h>
int main()
{
    int t, i, n, j;
    long long int f;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        f = 1;
        for (j = 1; j <= n; j++)
            f = f * j;
        printf("%lld\n", f);
    }
    return 0;
}