#include <stdio.h>
int main()
{
    int a, b, s, i, r = 0;
    scanf("%d%d", &a, &b);
    s = a + b + 1;
    char c[s];
    for (i = 0; i < s; i++)
        scanf("\n%c", &c[i]);

    if (c[a] == '-')
    {
        for (i = a + 1; i < s; i++)
        {
            if (c[i] >= '0' && c[i] <= '9')
                r = 1;
            else
            {
                r = 0;
                break;
            }
        }
    }
    if (r == 1)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
