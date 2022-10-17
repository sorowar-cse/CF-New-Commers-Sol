#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> v;
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    v.push_back({x1, y1});
    v.push_back({x2, y2});
    v.push_back({x3, y3});
    v.push_back({x4, y4});
    sort(v.begin(), v.end());
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x <= v[3].first && y <= v[3].second && x >= v[0].first && y >= v[0].second)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}