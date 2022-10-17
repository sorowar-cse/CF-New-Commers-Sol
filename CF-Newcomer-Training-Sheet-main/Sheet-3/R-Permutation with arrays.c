#include <stdio.h>
int main()
{
    int i, ii, j, n, c = 0, d = 0;
    scanf("%d", &n);
    long long int a[n + 5], b[n + 5];
    for (i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    for (ii = 0; ii < n; ii++)
        scanf("%lld", &b[ii]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                c = 1;
                a[j] = 0;
                break;
            }
            else
                c = 2;
        }
        if (c == 1)
            continue;
        else if (c == 2)
            break;
    }
    if (c == 1)
        printf("yes\n");
    else if (c == 2)
        printf("no\n");
    return 0;
}
