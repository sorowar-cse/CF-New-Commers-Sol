#include<bits/stdc++.h>
using namespace std;
 
double Distance (double x,double y, double xx, double yy)
{
    return sqrt(pow(xx-x,2) + pow(yy-y,2) * 1.0);
}
 
int main()
{
    double  x, xx, y, yy;
    cin >> x;
    cin >> y;
    cin >> xx;
    cin >> yy;
    cout << fixed << setprecision(6) << Distance(x, y, xx, yy);
}