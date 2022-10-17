#include <stdio.h>
int main()
{
    long long int a, t, r, l;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld", &a);
        if (a == 0)
            printf("0");
        while (a > 0)
        {
            r = a % 10;
            a = a / 10;
            printf("%lld ", r);
        }
        printf("\n");
    }
}
