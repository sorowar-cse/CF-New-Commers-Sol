#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000];
    gets(s);
    printf("Hello, %s", s);
    return 0;
}