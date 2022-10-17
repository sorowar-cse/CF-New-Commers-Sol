#include <stdio.h>
int main()
{
    int n, m, a[10005], b[10005], i, j, flag = 0, k;
    scanf("%d%d", &n, &m);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (j = 0; j < m; j++)
        scanf("%d", &b[j]);

    for (i = 0, k = 0; i < n; i++)
    {
        if (a[i] == b[k])
        {
            if (k == (m - 1))
            {
                printf("YES\n");
                flag = -1;
                break;
            }
            k++;
        }
    }
    if (flag == 0)
        printf("NO\n");

    return 0;
}
