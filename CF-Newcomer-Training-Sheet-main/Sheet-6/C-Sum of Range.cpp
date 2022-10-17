#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, y, a, b, c, d, t, p, q, r, n, m;
    cin >> x >> y;
    if (x > y)
        swap(x, y);
    if (x % 2 == 0)
    {
        a = x;
        c = a + 1;
    }
    else
    {
        c = x;
        a = c + 1;
    }
    if (y % 2 == 0)
    {
        b = y;
        d = b - 1;
    }
    else
    {
        d = y;
        b = d - 1;
    }
    p = ((y - x + 1) * ((2 * x) + (y - x))) / 2;
    n = ((b - a) / 2) + 1;
    m = ((d - c) / 2) + 1;
    q = (n * ((2 * a) + ((n - 1) * 2))) / 2;
    r = (m * ((2 * c) + ((m - 1) * 2))) / 2;
    cout << p << endl
         << q << endl
         << r;
}
