#include <stdio.h>
int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}
int main()
{
    int a, b, x;
    scanf("%d %d", &a, &b);
    x = swap(a, b);
}
