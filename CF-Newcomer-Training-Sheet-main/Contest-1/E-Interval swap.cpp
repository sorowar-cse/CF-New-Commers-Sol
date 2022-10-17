#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long int a, b, count = 0, cnt = 0;
    cin >> a >> b;

    if (a != 0 && b != 0)
    {
        if (a == b)
            cout << "YES" << endl;
        else if (a < b)
        {
            for (int i = 1; i < 2 * b - 1; i++)
                if (i % 2 == 1)
                    cnt++;

            if (cnt == a)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            for (int i = 1; i < 2 * a; i++)
                if (i % 2 == 0)
                    count++;

            if (count == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    else
        cout << "NO" << endl;
}
