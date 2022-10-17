
#include <iostream>
using namespace std;
long long int c, s, ar[32] = {0}, arr[32] = {0}, add[64] = {0};

void bin(long long int n)
{
    long long int i, k;
    ar[0] = 0;

    for (k = 1, i = 1 << 30; i > 0 && k < 32; i = i / 2, k++)
        if ((n & i) != 0)
            ar[k] = 1;
        else
            ar[k] = 0;
}

void bin1(long long int n)
{
    long long int i, k;
    arr[0] = 0;

    for (k = 1, i = 1 << 30; i > 0 && k < 32; i = i / 2, k++)
        if ((n & i) != 0)
            arr[k] = 1;
        else
            arr[k] = 0;
}

int main()
{
    unsigned long long int a, b;
    cin >> a >> b;

    bin(a);
    bin1(b);

    for (int l = 31; l > -1; l--)
    {
        if (ar[l] == 1 & arr[l] == 1)
        {
            s = 0;
            c = 1;
        }
        else
            s = ar[l] + arr[l];

        add[l] += s;
        // cout << add[l] << " " << endl;
    }

    int decimal = 0;
    for (int i = 0; i < 32; i++)
        // decimal = (decimal << 1) + add[i] ; // it also works
        decimal = decimal * 2 + add[i];

    cout << decimal << endl;

    return 0;
}
