#include <stdio.h>
int main()
{
    int a;
    float n, x;
    scanf("%f", &n);
    a = n;
    x = n - a;
    if (x != 0)
        printf("float %d %.3f\n", a, x);
    else
        printf("int %d\n", a);
    return 0;
}