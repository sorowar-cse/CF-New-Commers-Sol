#include <stdio.h>
int main()
{
    int n, m, x, i, j, a[100][100], flag = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
        printf("will not take number");
    else
        printf("will take number");
}