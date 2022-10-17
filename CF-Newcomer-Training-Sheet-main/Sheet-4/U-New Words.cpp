#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<char> s;
    char ch;
    int e = 0, g = 0, y = 0, p = 0, t = 0, i;
    while (cin >> ch)
    {
        s.push_back(ch);
    }
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'E' || s[i] == 'e')
            e++;
        if (s[i] == 'G' || s[i] == 'g')
            g++;
        if (s[i] == 'Y' || s[i] == 'y')
            y++;
        if (s[i] == 'P' || s[i] == 'p')
            p++;
        if (s[i] == 'T' || s[i] == 't')
            t++;
    }
    vector<int> s1;
    s1.push_back(e);
    s1.push_back(g);
    s1.push_back(y);
    s1.push_back(p);
    s1.push_back(t);
    cout << *min_element(s1.begin(), s1.end());
}