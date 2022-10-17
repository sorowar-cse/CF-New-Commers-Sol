
#include <bits/stdc++.h>
using namespace std;
string add(string s1, string s2)
{
    if (s1.length() > s2.length())
        swap(s1, s2);
    string s = "";
    int n1 = s1.length(), n2 = s2.length();
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int carry = 0;
    for (int i = 0; i < n1; i++)
    {
        int sum = ((s1[i] - '0') + (s2[i] - '0') + carry);
        s.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    for (int i = n1; i < n2; i++)
    {
        int sum = ((s2[i] - '0') + carry);
        s.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    if (carry)
        s.push_back(carry + '0');
    reverse(s.begin(), s.end());
    return s;
}

string multi(string s1, string s2)
{
    int len1 = s1.size();
    int len2 = s2.size();
    vector<int> result(len1 + len2, 0);
    int x = 0;
    int y = 0;
    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        int n1 = s1[i] - '0';
        y = 0;
        for (int j = len2 - 1; j >= 0; j--)
        {
            int n2 = s2[j] - '0';
            int sum = n1 * n2 + result[x + y] + carry;
            carry = sum / 10;
            result[x + y] = sum % 10;
            y++;
        }
        if (carry > 0)
        {
            result[x + y] += carry;
        }
        x++;
    }
    int i = result.size() - 1;
    while (i >= 0 && result[i] == 0)
        i--;
    if (i == -1)
        return 0;
    string s;
    while (i >= 0)
        s += to_string(result[i--]);
    return s;
}

int main()
{
    string str1, str2 = "9999";
    cin >> str1;
    cout << add(str1, str2) << endl;
    cout << multi(str1, str2) << endl;
    return 0;
}
