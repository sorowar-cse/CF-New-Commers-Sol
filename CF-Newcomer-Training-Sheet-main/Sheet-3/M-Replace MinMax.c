#include <stdio.h>
int main()
{
    int i, j, min, max, n, c_max, c_min;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min = a[0];
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
            c_min = i;
        }
        if (a[i] >= max)
        {
            max = a[i];
            c_max = i;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (i == c_min)
            printf("%d ", max);
        else if (i == c_max)
            printf("%d ", min);
        else
            printf("%d ", a[i]);
    }
    return 0;
}
