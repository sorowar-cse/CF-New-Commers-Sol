
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int c_r, s_r;
    cin >> c_r >> s_r;

    if ((2 * c_r) >= sqrt(2) * (s_r))
        cout << "Circle" << endl;
    else if ((2 * c_r) <= s_r)
        cout << "Square" << endl;
    else
        cout << "Complex" << endl;

    return 0;
}