#include <stdio.h>

int main()
{
    int r, s;
    scanf("%d%d\n", &r, &s);
    char a[r + 10][s + 10];
    int x, y, i, j;
    for (i = 0; i <= r + 1; i++)
    {
        for (j = 0; j <= s + 1; j++)
        {
            a[i][j] = 'x';
        }
    }

    for (i = 1; i < r + 1; i++)
    {
        for (j = 1; j < s + 1; j++)
        {
            scanf(" %c", &a[i][j]);
        }
    }

    scanf("%d%d", &x, &y);
    if (a[x - 1][y - 1] == 'x' && a[x - 1][y] == 'x' && a[x - 1][y + 1] == 'x' && a[x][y - 1] == 'x' && a[x][y + 1] == 'x' && a[x + 1][y - 1] == 'x' && a[x + 1][y] == 'x' && a[x + 1][y + 1] == 'x')
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
