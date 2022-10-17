#include <stdio.h>
int main()
{
    long long int n, i, k, max = -50, x, j;
    scanf("%lld", &n);
    long long int a[n + 1];
    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
        x = a[i];
        k = 0;
        while (x % 2 == 0)
        {
            k++;
            x /= 2;
        }
        if (k > max)
            max = k;
    }
    printf("%lld\n", max);

    return 0;
}