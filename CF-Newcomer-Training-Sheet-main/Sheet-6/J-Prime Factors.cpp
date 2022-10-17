#include <bits/stdc++.h>

int b[2 * 10000000] = {0};
void Utpadok(int n)
{
    int i, p, d = 0;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
            for (i = p * p; i <= n; i += p)
                prime[i] = false;
    }
    for (i = 2; i <= n; i++)
    {
        d = 0;
        if (prime[i])
        {
            while (n % i == 0)
            {
                if (n / i == 1)
                    d = 1;

                b[i]++;
                n /= i;
            }
            if (b[i] >= 1)
            {
                if (d)
                    printf("(%d^%d)", i, b[i]);
                else
                    printf("(%d^%d)*", i, b[i]);
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    Utpadok(n);
}
