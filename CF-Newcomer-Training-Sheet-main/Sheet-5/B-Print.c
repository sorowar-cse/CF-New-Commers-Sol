#include <stdio.h>
int num(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i < n)
        {
            printf(" ");
        }
    }
}
int main()
{
    int n, i, x;
    scanf("%d", &n);
    x = num(n);
}
