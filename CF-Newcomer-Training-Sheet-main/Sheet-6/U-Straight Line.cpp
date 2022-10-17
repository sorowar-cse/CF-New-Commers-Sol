#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{

    int x1 = 1, x2 = 1, x3 = 1,

        y1 = 1, y2 = 4, y3 = 5;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;

    int a = x1 * (y2 - y3) +

            x2 * (y3 - y1) +

            x3 * (y1 - y2);

    if (a == 0)

        cout << "YES";

    else

        cout << "NO";
}
