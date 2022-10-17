#include <stdio.h>
#include <string.h>
int main()
{
    int i, count = 0, flag = 0;
    long long c;
    char s[1000005];
    gets(s);
    c = strlen(s);
    for (i = 0; i < c; i++)
    {

        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            flag = 1;
        }

        if (flag)
            if (s[i] == '.' || s[i] == ' ' || s[i] == '!' || s[i] == '?' || s[i] == ',')
            {
                flag = 0;
                count++;
            }
    }
    if ((s[c - 1] >= 'a' && s[c - 1] <= 'z') || (s[c - 1] >= 'A' && s[c - 1] <= 'Z'))
        count++;
    printf("%d\n", count);
}