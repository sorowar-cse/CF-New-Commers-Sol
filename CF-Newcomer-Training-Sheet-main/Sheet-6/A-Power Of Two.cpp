
#include <iostream>
using namespace std;
int main()
{
    long long int n, i;
    cin >> n;
    while (n % 2 == 0)
    {
        n = n / 2;
    }
    if (n == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}