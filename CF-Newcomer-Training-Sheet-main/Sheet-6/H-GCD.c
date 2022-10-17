#include <stdio.h>
int main()
{
    long long a, b, lcm, t, g1, g2;
    scanf("%lld%lld", &a, &b);
    g1 = a;
    g2 = b;
    while (a != 0)
    {
        t = a;
        a = b % a;
        b = t;
    }
    g1 /= b;
    g2 /= b;
    lcm = g1 * g2 * b;
    printf("%lld %lld", b, lcm);
    return 0;
}
