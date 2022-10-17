#include <stdio.h>
int main()
{
    long long X, Y, sum, mul, div;
    scanf("%lld %lld", &X, &Y);

    sum = X + Y;
    mul = X * Y;
    div = X - Y;
    
    printf("%lld + %lld = %lld\n", X, Y, sum);
    printf("%lld * %lld = %lld\n", X, Y, mul);
    printf("%lld - %lld = %lld\n", X, Y, div);
    return 0;
}
