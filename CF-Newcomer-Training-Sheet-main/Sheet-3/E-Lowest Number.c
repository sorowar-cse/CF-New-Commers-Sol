#include <stdio.h>
#define size 100010
int main()
{
    int i, n;
    scanf("%d", &n);
    int ar[size];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int min = ar[1], pos = 1;
    for (i = 1; i <= n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
            pos = i;
        }
    }
    printf("%d %d\n", min, pos);
    return 0;
}