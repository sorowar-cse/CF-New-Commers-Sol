#include <stdio.h>
int main()
{
    int p = 0, i, n;
    scanf("%d", &n);
    if (n >= 2 && n <= 100000)
        for (i = 2; i < n; i++)
            if (n % i == 0)
            {
                p = 1;
                break;
            }
    if (p == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
