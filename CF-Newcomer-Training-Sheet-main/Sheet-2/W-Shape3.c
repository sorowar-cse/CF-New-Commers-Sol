#include <stdio.h>
int main()
{
    int i, j, k, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n - 1; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        for (k = 1; k < i; k++)
            printf("*");
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (n * 2 - (2 * i - 1)); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
