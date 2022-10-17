#include <stdio.h>
int main()
{
    int y, i, j, k;
    scanf("%d", &y);
    i = y / 365;
    j = (y % 365) / 30;
    k = (y % 365) % 30;
    printf("%d years\n%d months\n%d days", i, j, k);
    return 0;
}
