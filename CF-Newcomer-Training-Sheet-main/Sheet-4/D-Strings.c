#include <stdio.h>
int main()
{
    char x[1000], y[1000];
    gets(x);
    gets(y);
    char d[100];
    strcpy(d, x);
    int a = strlen(x);
    int b = strlen(y);
    printf("%d %d\n", a, b);
    strcat(x, y);
    puts(x);
    char t;
    t = d[0];
    d[0] = y[0];
    y[0] = t;

    printf("%s %s", d, y);
    return 0;
}
