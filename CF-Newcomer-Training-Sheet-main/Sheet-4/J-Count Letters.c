#include <stdio.h>

int main()
{
    char s[10000000];
    int a[200], i;
    gets(s);
    int len = strlen(s);
    for (i = 65; i <= 123; i++)
    {
        a[i] = 0;
    }
    for (i = 0; i <= len; i++)
    {
        a[s[i]]++;
    }
    for (i = 65; i <= 123; i++)
    {
        if (a[i] > 0)
        {
            printf("%c : %d\n", i, a[i]);
        }
    }
    return 0;
}
