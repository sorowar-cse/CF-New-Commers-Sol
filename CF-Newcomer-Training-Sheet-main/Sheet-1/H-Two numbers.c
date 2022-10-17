#include <stdio.h>
int main()
{
    int a, b, f, c, r;
    scanf("%d %d", &a, &b);
    f = floor((double)a / (double)b);
    c = ceil((double)a / (double)b);
    r = round((double)a / (double)b);
    printf("floor %d / %d = %d\n", a, b, f);
    printf("ceil %d / %d = %d\n", a, b, c);
    printf("round %d / %d = %d", a, b, r);
    return 0;
}