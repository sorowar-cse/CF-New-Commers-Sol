#include <iostream>
using namespace std;

int main()
{
    long long int l, r, m;
    cin >> l;
    cin >> r;
    cin >> m;

    long long int product = 1;
    for (long long int i = l; i < r + 1; i++)
    {
        product = (product * (i % m)) % m;
    }
    cout << product << endl;
    return 0;
}
