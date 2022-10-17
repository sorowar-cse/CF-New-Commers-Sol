#include <stdio.h>
int main()
{
    int n, i, a, b;
    char s[100];
    scanf("%d", &n);
    i = 0;
    while (i < n)
    {
        scanf("%s", &s);
        a = strlen(s);
        if (a <= 10)
        {
            puts(s);
        }
        else
        {
            printf("%c", s[0]);
            printf("%d", a - 2);
            printf("%c", s[a - 1]);
            printf("\n");
        }
        i++;
    }
    return 0;
}
