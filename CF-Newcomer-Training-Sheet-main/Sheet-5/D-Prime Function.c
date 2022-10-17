#include <stdio.h>
#include <math.h>
int prime(long long n)
{
    int i, c = 0;
    if (n == 1)
    {
        printf("NO\n");
    }
    else if (n != 1)
    {
        for (i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                c++;
            }
        }
        if (c == 1)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
int main()
{
    long long n;
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%lld", &n);
        prime(n);
    }
}