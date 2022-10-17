#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> s;
    char ch;
    while (cin >> ch)
        s.push_back(ch);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'u' && s[i + 1] == 's' && s[i + 2] == 'e' && s[i + 3] == 'r' && s[i + 4] == 'n' && s[i + 5] == 'a' && s[i + 6] == 'm' && s[i + 7] == 'e' && s[i + 8] == '=')
        {
            cout << "username: ";
            i = i + 9;
            while (s[i] != '&')
            {
                cout << s[i];
                i++;
            }
            cout << endl;
        }
        if (s[i] == 'p' && s[i + 1] == 'w' && s[i + 2] == 'd' && s[i + 3] == '=')
        {
            i = i + 4;
            cout << "pwd: ";
            while (s[i] != '&')
            {
                cout << s[i];
                i++;
            }
            cout << endl;
        }
        if (s[i] == 'p' && s[i + 1] == 'r' && s[i + 2] == 'o' && s[i + 3] == 'f' && s[i + 4] == 'i' && s[i + 5] == 'l' && s[i + 6] == 'e' && s[i + 7] == '=')
        {
            i = i + 8;
            cout << "profile: ";
            while (s[i] != '&')
            {
                cout << s[i];
                i++;
            }
            cout << endl;
        }
        if (s[i] == 'r' && s[i + 1] == 'o' && s[i + 2] == 'l' && s[i + 3] == 'e' && s[i + 4] == '=')
        {
            i = i + 5;
            cout << "role: ";
            while (s[i] != '&')
            {
                cout << s[i];
                i++;
            }
            cout << endl;
        }
        if (s[i] == 'k' && s[i + 1] == 'e' && s[i + 2] == 'y' && s[i + 3] == '=')
        {
            i = i + 4;
            cout << "key: ";
            while (i != s.size())
            {
                cout << s[i];
                i++;
            }
            cout << endl;
        }
    }
}
