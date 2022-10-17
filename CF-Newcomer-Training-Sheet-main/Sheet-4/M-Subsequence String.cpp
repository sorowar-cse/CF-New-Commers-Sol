
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    string s2 = "hello";
    int i = 0, j = 0;
    while (i < s1.size())
    {
        if (s1[i] == s2[j])
        {
            i++;
            j++;
        }
        else
            i++;
    }
    if (j == s2.size())
        cout << "YES";
    else
        cout << "NO";
}