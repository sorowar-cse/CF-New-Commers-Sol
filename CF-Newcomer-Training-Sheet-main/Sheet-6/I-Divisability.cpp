#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, x;

    cin >> a >> b >> x;

    if (a > b)
        swap(a, b);

    if (a % x != 0)
    {
        int p = (a / x) + 1;

        a = p * x;
    }

    b = (b / x);
    b = b * x;
    if (a == b)
        cout << a << endl;
    else
    {
        int n = ((b - a) / x) + 1;

        long long int sum;
        sum = (n - 1) * x;
        sum = (2 * a) + sum;
        sum = (n * sum) / 2;

        cout << sum << endl;
    }
}