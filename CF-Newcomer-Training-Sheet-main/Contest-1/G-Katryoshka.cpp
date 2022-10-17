#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    long long int e, k, b, min, s1, s;
    cin >> e >> k >> b;
    s = std::min({e, k, b});
    if (s == e || s == b)
    {
        cout << s;
    }
    else if (s == k)
    {
        s1 = (e - s) / 2;
        if ((b - s) > s1)
            cout << s + s1;
        else
            cout << s + (b - s);
    }
}