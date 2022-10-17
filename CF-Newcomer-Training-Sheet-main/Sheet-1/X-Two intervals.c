#include <stdio.h>
int main()
{
    int a1, a2, b1, b2;
    scanf("%d%d%d%d", &a1, &a2, &b1, &b2);
    if (b1 > a2 || a1 > b2)
        printf("%d\n", -1);
    else if (a1 >= b1 && a2 <= b2)
        printf("%d %d\n", a1, a2);
    else if (a1 >= b1 && a2 >= b2)
        printf("%d %d\n", a1, b2);
    else if (a1 <= b1 && a2 >= b2)
        printf("%d %d\n", b1, b2);
    else if (a1 <= b1 && a2 <= b2)
        printf("%d %d\n", b1, a2);
    return 0;
}