
#include <iostream>
#include <math.h>
using namespace std;

int Valid_or_Not(double a, double b, double c)
{
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        return 0;
    else
        return 1;
}

double Area(double a, double b, double c)
{
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (Valid_or_Not(a, b, c))
    {
        cout << "Valid" << endl;
        cout << Area(a, b, c) << endl;
    }
    else
        cout << "Invalid" << endl;
}
