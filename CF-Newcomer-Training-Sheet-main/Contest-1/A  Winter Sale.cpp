#include <stdio.h>
int main()
{
    double x, y, z;
    scanf("%lf %lf", &x, &y);
    z = (y * 100) / (100 - x);
    printf("%0.2lf\n", z);
}