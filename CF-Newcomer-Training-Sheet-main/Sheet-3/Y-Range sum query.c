#include <stdio.h>
int main()
{
    long long int a[100000], b[100000], n, q, i, j, k, l, r, sum = 0, add = 0;

    scanf("%lld %lld", &n, &q);

    for (i = 1, j = 1; i <= n; i++, j++)
    {
        scanf("%lld", &a[i]);
        add = add + a[i];
        b[j] = add;
    }

    for (j = 1, b[0] = 0; j <= q; j++)
    {
        scanf("%d %d", &l, &r);

        sum = b[r] - b[l - 1];

        printf("%lld\n", sum);
    }

    return 0;
}