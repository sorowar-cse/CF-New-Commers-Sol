#include <iostream>
using namespace std;

long long int mod(string num, long long int a)
{
    long long int res = 0;

    for (long long int i = 0; i < num.length(); i++)
        res = (res * 10 + (long long int)num[i] - '0') % a;

    return res;
}

int main()
{
    string num;
    cin >> num;
    long long int x;
    cin >> x;
    long long int m = mod(num, x);

    if (m == 0)
        cout << "YES";
    else
        cout << "NO";
}