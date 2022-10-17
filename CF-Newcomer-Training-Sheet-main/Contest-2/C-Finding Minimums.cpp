#include <iostream>
using namespace std;
int main()
{

    long long int x, n, s, i, j, l = 1;
    cin >> n >> x;
    long long int a[n + 1];
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i <= n; i = i + x)
    {
        long long int min = 10000000000;
        for (j = i; j <= n; j++)
        {
            if (min > a[j])
                min = a[j];
            if (j == x * l)
                break;
        }
        cout << min << " ";
        if (j == n)
            break;
        l++;
    }
}
