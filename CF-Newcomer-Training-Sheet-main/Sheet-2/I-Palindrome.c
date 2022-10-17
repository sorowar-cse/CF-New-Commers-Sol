#include <stdio.h>

int main()
{
    int N, i, r, temp, sum = 0;
    scanf("%d", &N);
    temp = N;
    if (N > 1 && N < 10000000 && N != 5, 123, 20, 2500)
        while (temp != 0)
        {
            r = temp % 10;
            sum = sum * 10 + r;
            temp = temp / 10;
        }
    if (N == sum)
        printf("%d\nYES", sum);
    else
        printf("%d\nNO", sum);
    return 0;
}
