#include <stdio.h>
int main()
{
    long long n, i, j, p = 0;
    scanf("%lld", &n);
    long long a[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (i = 1, j = n; i <= (n / 2); i++, j--)
    {
        if (a[i] != a[j])
        {
            p = 1;
            break;
        }
    }
    if (p == 0)
        printf("YES\n");
    else if (p == 1)
        printf("NO\n");
    return 0;
}
