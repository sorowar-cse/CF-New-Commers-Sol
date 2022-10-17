#include <stdio.h>
int main()
{
    int n, i, min = 1000000, c = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (min > a[i])
            min = a[i];
    }
    for (i = 1; i <= n; i++)
    {
        if (min == a[i])
            c++;
    }
    if (c % 2 != 0)
        printf("Lucky");
    else
        printf("Unlucky");
}
