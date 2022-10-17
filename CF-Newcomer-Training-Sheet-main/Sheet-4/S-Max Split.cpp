#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int r = 0, l = 0, k, count = 0, i, j;
    bool x = true;
    getline(cin, a);
    for (i = 0; a[i]; i++)
    {
        if (a[i] == 'L')
            l++;
        else
            r++;
        if (l == r)
        {
            count++;
            l = 0;
            r = 0;
        }
    }
    cout << count << endl;
    for (i = 0; a[i]; i++)
    {
        if (a[i] == 'L')
            l++;
        else
            r++;
        if (l == r)
        {
            if (x == true)
            {
                for (j = 0; j <= i; j++)
                    cout << a[j];
                x = false;
                cout << endl;
            }
            else
            {
                for (j = k; j <= i; j++)
                    cout << a[j];
                cout << endl;
            }
            k = i + 1;
            l = 0;
            r = 0;
        }
    }
    return 0;
}
