#include <stdio.h>
int main()
{
    int n, i;
    long long int sum = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
    }
    if (sum < 0)
        sum = -sum;
    printf("%lld\n", sum);
    return 0;
}