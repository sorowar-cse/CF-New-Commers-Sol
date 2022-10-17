#include <stdio.h>
int main()
{
    int n, i, j, temp, x, sum = 0;
    while (1)
    {
        scanf("%d %d", &i, &j);
        if ((i >= 0 && j <= 0) || (i <= 0 && j >= 0))
            break;
        if (i >= j)
        {
            temp = i;
            i = j;
            j = temp;
        }
        sum = 0;
        for (x = i; x <= j; x++)
        {
            sum = sum + x;
            printf("%d ", x);
        }
        printf("sum =%d\n", sum);
    }
    return 0;
}
