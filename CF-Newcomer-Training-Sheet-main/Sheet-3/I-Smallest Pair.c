#include <stdio.h>
int main()
{
    long long n, i;
    scanf("%lld", &n);
    for (i = 1; i <= n; i++)
    {
        long long a, p = 1000000000;
        scanf("%lld", &a);
        long long x[a + 5], j, k, sum;
        for (j = 1; j <= a; j++)
        {
            scanf("%lld", &x[j]);
        }
        for (j = 1; j < a; j++)
            for (k = j + 1; k <= a; k++)
            {
                sum = x[j] + x[k] + k - j;
                if (sum < p)
                    p = sum;
            }
        printf("%lld\n", p);
    }
    return 0;
}
