
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    string s;
    cin >> s;
    while (p--)
    {
        string s1;
        cin >> s1;
        if (s1 == "substr")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            string str;
            str = s.substr(l - 1, r - l + 1);
            cout << str << endl;
        }
        else if (s1 == "pop_back")
            s.pop_back();
        else if (s1 == "front")
            cout << s[0] << endl;
        else if (s1 == "back")
            cout << s[s.size() - 1] << endl;
        else if (s1 == "sort")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            sort(s.begin() + l - 1, s.begin() + r);
        }
        else if (s1 == "reverse")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            reverse(s.begin() + l - 1, s.begin() + r);
        }
        else if (s1 == "print")
        {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << endl;
        }
        else if (s1 == "push_back")
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }
}
