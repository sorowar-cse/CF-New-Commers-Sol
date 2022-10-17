#include <bits/stdc++.h>
using namespace std;

bool isInside(long long int circle_x, long long int circle_y, long long int rad, long long int x, long long int y)
{
    if ((x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad)
        return true;
    else
        return false;
}

int main()
{
    long long int circle_x, circle_y, rad, tc;
    cin >> circle_x >> circle_y >> rad >> tc;
    while (tc--)
    {
        int x, y;
        cin >> x >> y;

        isInside(circle_x, circle_y, rad, x, y) ? cout << "YES\n" : cout << "NO\n";
    }
}