#include <iostream>
using namespace std;

int main()
{
    long long int x, y, k;
    cin >> x >> y >> k;
    if (x % k == 0 && y % k == 0)
        cout << "Both" << endl;
    else if (x % k == 0 && y % k != 0)
        cout << "Memo" << endl;
    else if (x % k != 0 && y % k == 0)
        cout << "Momo" << endl;
    else
        cout << "No One" << endl;

    return 0;
}