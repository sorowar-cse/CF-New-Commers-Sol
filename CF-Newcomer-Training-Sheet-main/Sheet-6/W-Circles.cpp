#include <bits/stdc++.h>
using namespace std;
int reminder(int a, int b)
{
    int mod = a % b;
    if (mod < 0)
    {
        return mod += b;
    }
    return mod;
}
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    double cx1, cy1, cx2, cy2;
    cx1 = (x1 + x2) / 2.0;
    cy1 = (y1 + y2) / 2.0;
    cx2 = (x3 + x4) / 2.0;
    cy2 = (y3 + y4) / 2.0;
    double r1 = sqrt((cx1 - x2) * (cx1 - x2) + (cy1 - y2) * (cy1 - y2));
    double r2 = sqrt((cx2 - x3) * (cx2 - x3) + (cy2 - y3) * (cy2 - y3));
    // cout<<r1<<" "<<r2<<endl;
    double r = r1 + r2;
    double d = sqrt((cx1 - cx2) * (cx1 - cx2) + (cy1 - cy2) * (cy1 - cy2));
    // cout<<r<<" "<<d<<endl;
    if (d <= r)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}