#include <stdio.h>
#include <math.h>
int main()
{
    long long int n, x, q, d, sum, num, mod, s;
    scanf("%lld", &n);
    for (q = 1; q <= n; q++)
    {
        scanf("%lld", &x);
        sum = 0;
        while (x != 0)
        {
            mod = x % 2;
            x /= 2;
            sum = sum + mod;
        }
        s = 0;
        for (num = 0; num <= (sum - 1); num++)
        {
            s = s + pow(2, num);
        }
        printf("%lld\n", s);
    }
    return 0;
}
