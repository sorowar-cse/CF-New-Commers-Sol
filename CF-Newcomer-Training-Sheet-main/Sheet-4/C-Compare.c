#include <stdio.h>
int main()
{
    int x[1000], y[1000];
    gets(x);
    gets(y);
    int status;
    status = strcmp(x, y);
    if (status > 0)
    {
        puts(y);
    }
    if (status == 0)
    {
        puts(x);
    }
    if (status < 0)
    {
        puts(x);
    }
}
