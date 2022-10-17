#include <iostream> 
using namespace std;
int main()
{
    int x, i, j;
    cin >> x;
    int a[x + 1];
    for (i = 1; i <= x; i++)
    {
        cin >> a[i];
    }
    for (i = 1, j = x; i <= x / 2 + 1; i++, j--)
    {
        if (x % 2 == 1)
        {
            cout << a[i] << " ";
            if (j == x / 2 + 1)
                break;
            cout << a[j] << " ";
        }
        else
        {
            cout << a[i] << " " << a[j] << " ";
            if (j == x / 2 + 1)
                break;
        }
    }
}
