#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    int n, i, c = 0, y;
    double x = 0;
    cin >> n;
    if (n < 0)
        c = 0;
    if (n <= 1)
        c = 1;
    else
    {
        for (i = 2; i <= n; i++)
        {
            x = x + log10(i);
        }
        c = ceil(x);
    }
    cout << "Number of digits of " << n << "!"
         << " is " << c;
}