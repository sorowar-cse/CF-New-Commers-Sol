#include <iostream>
using namespace std;
int main()
{
    long long int n;
    long long int p, i, x, j, t = 0, y, k, r1, c1, r2, c2;
    cin >> r1 >> c1;
    long long int a[r1][c1];
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> r2 >> c2;
    long long int b[r2][c2];
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    long long int m[r1][c2];
    t = 0;
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            t = 0;
            for (k = 0; k < c1; ++k)
            {
                t += a[i][k] * b[k][j];
            }
            m[i][j] = t;
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}