#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> vec;
    string s;
    while (cin >> s)
        vec.push_back(s);
    for (int i = 0; i < vec.size(); i++)
        reverse(vec[i].begin(), vec[i].end());
    for (int i = 0; i < vec.size() - 1; i++)
        cout << vec[i] << " ";
    cout << vec[vec.size() - 1];
}
