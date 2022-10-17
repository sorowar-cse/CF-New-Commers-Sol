
#include <stdio.h>
int main()
{
    int N, i;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        if (N == 1)
        {
            printf("-1");
        }
    }
    return 0;
}