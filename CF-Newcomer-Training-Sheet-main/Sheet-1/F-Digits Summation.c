#include <stdio.h>
int main()
{
    long long x, y;
    int s;
    scanf("%lld %lld", &x, &y);
    s = (x % 10) + (y % 10);
    printf("%d\n", s);
    return 0;
}
