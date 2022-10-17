#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, k = 0, i;
    cin >> n;
    string s;
    cin >> s;
    for (i = 0; i < n; i++)
    {
        if (s[i] != s[i + 1])
            k++;
    }
    cout << k;
}
