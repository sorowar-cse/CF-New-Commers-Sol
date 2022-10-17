#include <stdio.h>
int main()
{
    int a, i, j, k, count;
    scanf("%d", &a);
    for (i = 1; count < a; i = i + 4)
    {
        j = i + 1;
        k = j + 1;
        printf("%d %d %d PUM\n", i, j, k);
        count++;
    }
}