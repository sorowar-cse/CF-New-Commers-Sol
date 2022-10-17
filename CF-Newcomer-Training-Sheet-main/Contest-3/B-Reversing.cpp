#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n, i;
    cin >> n;
    int a[n + 1];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            reverse(a, a + (i));
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        if (i == n - 1)
            break;
    }
}