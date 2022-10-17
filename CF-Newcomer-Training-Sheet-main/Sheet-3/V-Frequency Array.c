#include <stdio.h>
int main()
{
    int n, i, num, x;
    scanf("%d %d", &n, &x);
    int ar[1000000];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        ar[num]++;
    }
    for (i = 1; i <= x; i++)
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}
