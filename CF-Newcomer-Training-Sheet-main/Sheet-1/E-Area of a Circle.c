#include <stdio.h>
int main()
{
    double a = 3.141592653, r, area;
    scanf("%lf", &r);
    area = a * r * r;
    printf("%.9lf", area);
    return 0;
}