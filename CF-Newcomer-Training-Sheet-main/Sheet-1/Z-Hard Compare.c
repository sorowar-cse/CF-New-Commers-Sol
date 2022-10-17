#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long int a, b, c, d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    double x = (b * log(a));
    double y = (d * log(c));
    if (x > y)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}