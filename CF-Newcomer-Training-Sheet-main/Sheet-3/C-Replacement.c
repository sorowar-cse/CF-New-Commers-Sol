#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a1[n], a2[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a1[i] > 0)
            a2[i] = 1;
        else if (a1[i] < 0)
            a2[i] = 2;
        else
            a2[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a2[i]);
    }
    return 0;
}
