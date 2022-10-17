#include <stdio.h>
int main()
{
    long long n, i, count = 0;
    scanf("%lld", &n);
    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count += i;
            if (i * i != n)
                count += (n / i);
        }
    }
    printf("%lld", count);
    return 0;
}

