#include <stdio.h>
int main()
{
    int a, b, sum = 0, t, i, temp;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &a, &b);
        if (a >= b)
        {
            temp = a;
            a = b;
            b = temp;
        }

        sum = 0;
        for (i = a + 1; i < b; i++)
        {
            if (i % 2 != 0)
                sum = sum + i;
        }
        printf("%d\n", sum);
    }
}