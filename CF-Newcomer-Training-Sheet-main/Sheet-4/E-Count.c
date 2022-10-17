#include <stdio.h>
int main()
{
    int i, sum = 0, a = 0;
    char s[1000000];
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        a = a + 1;
        sum = sum + (s[i] - '0');
    }
    printf("%d\n", sum);
    return 0;
}
