#include <stdio.h>

void p(int a[], int n)
{
    int i, j, swap, position, max, min, cnt = 0;
    for (i = 0; i < n - 1; i++)
    {
        position = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[position] > a[j])
                position = j;
        }
        if (position != i)
        {
            swap = a[i];
            a[i] = a[position];
            a[position] = swap;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
        {
            cnt++;
        }
    }

    printf("%d\n", cnt);
}
int main()
{
    int arr[1000000];

    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    p(arr, n);

    return 0;
}
