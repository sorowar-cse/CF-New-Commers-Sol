#include <stdio.h>
int main()
{
    int i, j, a[1000], n, k;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
        for (j = i + 1; j <= n; j++)
        {
            if (a[j] < a[i])
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
