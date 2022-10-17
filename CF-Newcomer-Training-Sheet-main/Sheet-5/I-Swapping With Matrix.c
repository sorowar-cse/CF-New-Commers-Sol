#include <stdio.h>
int n, x, y, i, j;
void swap1(int a[][n])
{
    int b[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            b[i][j] = a[i][j];
    }
    for (i = 0; i < n; i++)
    {
        a[x][i] = b[y][i];
        a[y][i] = b[x][i];
    }
}
void swap2(int a[n][n])
{
    int b[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            b[i][j] = a[i][j];
    }
    for (j = 0; j < n; j++)
    {
        a[j][x] = b[j][y];
        a[j][y] = b[j][x];
    }
}
int main()
{

    scanf("%d%d%d", &n, &x, &y);
    x = x - 1;
    y = y - 1;
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }

    swap1(a);
    swap2(a);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}