#include <stdio.h>
int main()
{
    long long int a, first;
    scanf("%lld", &a);
    first = a;
    while (first >= 10)
    {
        first = first / 10;
    }
    if (first % 2 == 0)
        printf("EVEN");
    else
        printf("ODD");
    return 0;
}
