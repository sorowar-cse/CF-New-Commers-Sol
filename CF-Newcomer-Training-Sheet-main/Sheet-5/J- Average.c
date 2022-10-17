
#include <stdio.h>
int n, i;
double ava(double a[])
{
    double r, sum;
    sum = 0;
    for (i = 0; i < n; i++)
        sum = sum + a[i];

    return sum / n;
}

int main()
{
    scanf("%d", &n);
    double a[n + 9];
    for (i = 0; i < n; i++)
        scanf("%lf", &a[i]);

    double r = ava(a);
    printf("%.7lf", r);
    return 0;
}
