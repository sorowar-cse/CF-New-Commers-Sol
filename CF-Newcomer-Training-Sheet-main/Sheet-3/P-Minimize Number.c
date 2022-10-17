#include <stdio.h>
int main()
{
    int n, i, k, min = 50, x, j;
    scanf("%d", &n);
    int a[n + 1];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n; i++)
    {
        x = a[i];
        k = 0;
        while (x % 2 == 0)
        {
            k++;
            x /= 2;
        }
        if (k < min)
            min = k;
    }
    printf("%d\n", min);

    return 0;
}