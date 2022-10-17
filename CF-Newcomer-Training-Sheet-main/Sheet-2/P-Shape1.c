#include <stdio.h>
int main()
{
    int a, b, c, n;
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        for (b = a; b <= n; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
