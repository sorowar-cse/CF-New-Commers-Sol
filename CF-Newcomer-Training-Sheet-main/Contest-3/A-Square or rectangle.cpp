#include <iostream>
using namespace std;

int main()
{
    long long int x, y, t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x == y)
            cout << "Square" << endl;
        else
            cout << "Rectangle" << endl;
    }
    return 0;
}