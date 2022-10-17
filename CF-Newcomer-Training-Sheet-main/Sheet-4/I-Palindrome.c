#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000], b[1000];
    gets(a);
    strcpy(b, a);
    strrev(b);
    if (strcmp(b, a) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
