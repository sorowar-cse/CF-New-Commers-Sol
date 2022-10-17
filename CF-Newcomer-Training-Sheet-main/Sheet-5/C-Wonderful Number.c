#include <stdio.h>
#define S 1000000
int a[S];
void Iswonder(int len)
{
    int i, d = 1;
    // len/=2;
    for (i = 1; i <= len / 2; i++)
    {
        if (a[i] != a[len - i + 1])
        {
            d = 0;
            printf("NO");
            break;
        }
        // printf("%d %d\n",a[i],a[len-i+1]);
    }

    if (d)
        printf("YES");
}
void binary(int n)
{
    int i, len = 0;
    for (i = 1; n; i++)
    {
        a[i] = n % 2;
        // printf("%d ",a[i]);
        n /= 2;
        len++;
    }
    Iswonder(len);
}
int main()
{
    int n, d = 1;
    scanf("%d", &n);
    if (n % 2 == 0)
        d = 0;
    if (d)
    {
        binary(n);
    }
    else
        printf("NO");
} 