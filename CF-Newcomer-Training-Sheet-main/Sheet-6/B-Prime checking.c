#include <stdio.h>
int main()
{
    long long int n, i, f;
    scanf("%lld", &n);
    if (n == 1)
        printf("NO");
    else
    {
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                f = 0;
                break;
            }
            else
                f = 1;
        }
        if (f == 1)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
