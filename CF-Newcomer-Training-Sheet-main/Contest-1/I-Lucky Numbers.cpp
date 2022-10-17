#include <iostream>
using namespace std;

int main()
{
    int x, z, y;
    cin >> x;
    z = x % 10;
    x = x / 10;
    y = x % 10;
    if (z % y == 0 || y % z == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}