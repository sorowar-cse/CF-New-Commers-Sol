#include <stdio.h>
int main()
{
    long long int s, n, i;
    scanf("%lld", &n);
    s = (n * (n + 1)) / 2;
    printf("%lld\n", s);
    return 0;
}