#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, s1, s2;
    s1 = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    s2 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int n, i, pos;
    cin >> n >> s;
    if (n == 1)
    {
        for (i = 0; i < s.size(); i++)
        {
            pos = s2.find(s[i]);
            s[i] = s1[pos];
        }
    }
    else
    {
        for (i = 0; i < s.size(); i++)
        {
            pos = s1.find(s[i]);
            s[i] = s2[pos];
        }
    }
    cout << s;
}
