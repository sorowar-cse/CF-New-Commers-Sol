#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for (i = 1; i <= 12; i++)
    {
        if (n <= 50)
        {
            printf("%d * %d = %d\n", n, i, n * i);
        }
    }
    return 0;
}