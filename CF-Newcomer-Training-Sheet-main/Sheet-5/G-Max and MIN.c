#include <stdio.h>
int find(int n)
{
    int a[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0], min = a[0];
    for (i = 0; i < n; i++)
    {
        {
            if (max < a[i])
                max = a[i];
        }
        {
            if (min > a[i])
                min = a[i];
        }
    }
    printf("%d %d", min, max);
}
int main()
{
    int n, i, x;
    scanf("%d", &n);
    x = find(n);
}
