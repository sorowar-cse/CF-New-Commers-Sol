#include <stdio.h>
int main()
{
    long long int i, s[5];
    for (i = 0; i < 3; i++)
    {
        scanf("%lld", &s[i]);
    }
    long long int max = s[0], min = s[0];
    for (i = 0; i < 3; i++)
    {
        if (max < s[i])
        {
            max = s[i];
        }
        else if (min > s[i])
        {
            min = s[i];
        }
    }
    printf("%lld %lld", min, max);

    return 0;
}
