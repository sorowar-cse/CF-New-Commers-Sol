#include <stdio.h>
#define size 100032

void N_A(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
        b[i + n] = a[i];
}

int main()
{
    int a[size], b[size], i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    N_A(a, b, n);
    for (i = 0; i < 2 * n; i++)
        printf("%d ", b[i]);
    return 0;
}