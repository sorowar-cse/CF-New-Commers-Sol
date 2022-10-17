#include <stdio.h>

int main()
{
    int i, j, n, temp;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    i = 0;
    j = n - 1;
    while (i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    for (j = 0; j < n; j++)
    {
        printf("%d ", a[j]);
    }
    return 0;
}
