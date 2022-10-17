#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100], c1[100], c2[100];
    scanf("%s %s", &s1, &s2);
    scanf("%s %s", &c1, &c2);
    int d = strcmp(s2, c2);
    if (d == 0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }
    return 0;
}
