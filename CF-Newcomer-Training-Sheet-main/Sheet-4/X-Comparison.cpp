#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1, s2;
    cin >> s;
    string min = s;
    for (int i = 1; i < s.size(); i++)
    {
        s1 = s.substr(0, i);
        // cout<<s1<<endl;
        s2 = s.substr(i);
        // cout<<s2<<endl;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 + s2 < min)
            min = s1 + s2;
    }
    cout << min << endl;
    return 0;
}