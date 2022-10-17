#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int a[30], n, i, j, x;
    cin >> n;
    char ch;
    memset(a, 0, sizeof(a));
    for (i = 0; i < n; i++)
    {
        cin >> ch;
        x = ch - 'a';
        a[x]++;
    }
    for (i = 0; i < 30; i++)
    {
        for (j = 0; j < a[i]; j++)
        {
            ch = 'a' + i;
            cout << ch;
        }
    }
    cout << endl;
    return 0;
}
