#include <iostream>
using namespace std;

int main()
{
    long long int a, b, s;
    cin >> a >> b;
    s = a - b;
    if (s >= 0)
        cout << s;
    else
        cout << 0;
    return 0;
}