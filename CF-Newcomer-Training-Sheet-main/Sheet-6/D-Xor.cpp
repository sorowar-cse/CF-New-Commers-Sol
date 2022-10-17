#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, q, k = 0;
    cin >> a >> b >> q;
    if (q % 3 == 1)
        cout << a << endl;
    else if (q % 3 == 2)
        cout << b << endl;
    else if (q % 3 == 0)
    {
        // k=(q-1)^(q-2);
        cout << (a ^ b) << endl;
    }
}
