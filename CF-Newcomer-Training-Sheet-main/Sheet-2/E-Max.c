#include <stdio.h>
int main()
{
    int i, n, m;
    scanf("%d", &n);
    int ara[n];
    for (i = 1; i <= n; i++)
        scanf("%d", &ara[i]);
    m = ara[1];
    for (i = 1; i <= n; i++)
    {
        if (ara[i] > m)
            m = ara[i];
    }
    printf("%d\n", m);
    return 0;
}