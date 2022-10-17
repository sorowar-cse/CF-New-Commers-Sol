#include <stdio.h>
void shift(int a[], int x, int n)
{
    int t, i;
    while (x--)
    {
        t = a[n];
        for (i = n; i > 0; i--)
            a[i] = a[i - 1];

        a[0] = t;
    }
}

int main()
{
    int n, x, i;
    scanf("%d%d", &n, &x);
    int a[n + 10];
    x %= n;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    shift(a, x, n - 1);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
