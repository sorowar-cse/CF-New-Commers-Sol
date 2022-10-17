#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, k, max, x, j;
        scanf("%d", &n);
        int a[n + 1];
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 1; i <= n; i++)
        {
            max = -100000;
            for (j = i; j <= n; j++)
            {
                if (a[j] > max)
                    max = a[j];
                printf("%d ", max);
            }
        }
        printf("\n");
    }

    return 0;
}
