#include <stdio.h>
void s_zero(int a, int b[])
{
    int i, count = 0;
    for (i = 0; i < a; i++)
    {
        if (b[i] > 0)
        {
            b[count++] = b[i];
        }
    }
    while (count < a)
    {
        b[count++] = 0;
    }
    for (i = 0; i < a; i++)
    {
        printf(" %d ", b[i]);
    }
}
int main()
{
    int a[1010], i, n;
    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
        scanf("%d ", &a[i]);
    s_zero(n, a);
    return 0;
}
