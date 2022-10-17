#include <stdio.h>
#define size 1010
int main()
{
    int A[size];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (A[i] <= 10)
        {
            printf("A[%d] = %d\n", i, A[i]);
        }
    }
    return 0;
}