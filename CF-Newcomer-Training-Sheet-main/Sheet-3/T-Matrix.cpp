#include <stdio.h>
int main()
{
    int A[100][100], i, j, n, x, s = 0, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum = sum + A[i][j];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                s = s + A[i][j];
            }
        }
    }
    x = sum - s;
    if (x < 0)
    {
        x = (-1) * x;
        printf("%d", x);
    }
    else
        printf("%d", x);
    return 0;
}
