#include <stdio.h>

int main()
{
    int a, b, c, d;
    long long int x;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    x = (((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100);
    if (x == 0)
    {
        printf("00\n");
    }
    else if (x >= 1 && x <= 9)
    {
        printf("0%lld\n", x);
    }
    else
        printf("%lld\n", x);

    return 0;
}