#include <stdio.h>
char re(char c)
{
    return c;
}
int main()
{

    int t, i, n;
    scanf("%d\n", &t);
    char c, y;
    while (t--)
    {
        scanf("%d %c", &n, &c);
        for (i = 0; i < n; i++)
        {
            y = re(c);
            printf("%c", y);
            if (i != n - 1)
                printf("%c", ' ');
        }
        printf("\n");
    }
    return 0;
}