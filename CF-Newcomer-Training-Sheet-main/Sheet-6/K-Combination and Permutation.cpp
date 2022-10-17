#include <iostream>
using namespace std;

int main()
{
    long long int a, b, i, j, k, l, ncr, npr, p = 1, q = 1, r = 1;
    cin >> a >> b;
    l = a - b;
    for (i = 2; i <= a; i++)
        p *= i;
    for (j = 2; j <= b; j++)
        q *= j;
    for (k = 2; k <= l; k++)
        r *= k;
    ncr = p / (q * r);
    npr = p / r;
    cout << ncr << " " << npr << endl;
    return 0;
}
