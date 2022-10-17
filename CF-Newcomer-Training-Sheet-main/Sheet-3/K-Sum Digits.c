#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    getchar();
    char a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%c", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i] - '0';
    }
    printf("%d\n", sum);
    return 0;
}