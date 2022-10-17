#include <stdio.h>
int main()
{
    char ch;
    long long int a, b, ans;
    scanf("%lld%c%lld", &a, &ch, &b);
    switch (ch)
    {
    case '+':
    {
        ans = a + b;
        printf("%lld", ans);
        break;
    }
    case '-':
    {
        ans = a - b;
        printf("%lld", ans);
        break;
    }
    case '*':
    {
        ans = a * b;
        printf("%lld", ans);
        break;
    }
    case '/':
    {
        ans = a / b;
        printf("%lld", ans);
        break;
    }
    }
    return 0;
}
