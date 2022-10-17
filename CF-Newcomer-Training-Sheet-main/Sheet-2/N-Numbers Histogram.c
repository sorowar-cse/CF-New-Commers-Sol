#include <stdio.h>
int main()
{
    int n, j, i, x;
    char o = {'+', '-', '*', '/'};
    scanf("%c", &o);
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        x = a[i];
        for (j = 0; j < x; j++)
        {
            printf("%c", o);
        }
        printf("\n");
    }
}
