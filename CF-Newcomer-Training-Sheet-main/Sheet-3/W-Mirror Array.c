#include <stdio.h>
int main()
{
    int r, c, i, a[100][100], j;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = c - 1; j >= 0; j--)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}