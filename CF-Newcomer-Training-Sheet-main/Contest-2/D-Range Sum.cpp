#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        long long int n1, n2, l, r, cnt = 0;
        cin >> l >> r;

        if (l > r)
            swap(l, r);

        if (r % 2 == 0)
            n1 = (r / 2) * (r + 1);
        else
            n1 = (r) * ((r + 1) / 2);

        if ((l - 1) % 2 == 0)
            n2 = ((l - 1) / 2) * ((l - 1) + 1);
        else
            n2 = (l - 1) * (((l - 1) + 1) / 2);

        cout << n1 - n2 << endl;
    }
}