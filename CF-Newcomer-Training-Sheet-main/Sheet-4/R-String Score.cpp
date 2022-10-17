#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, sum = 0, i;
    cin >> n;
    string s;
    cin >> s;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'V')
            sum = sum + 5;
        else if (s[i] == 'W')
            sum = sum + 2;
        else if (s[i] == 'X')
            i++;
        else if (s[i] == 'Y')
        {
            s.push_back(s[i + 1]);
            i++;
        }
        else if (s[i] == 'Z')
        {
            if (s[i + 1] == 'V')
            {
                sum = sum / 5;
                i++;
            }
            else if (s[i + 1] == 'W')
            {
                sum = sum / 2;
                i++;
            }
            else
                continue;
        }
    }
    cout << sum;
}
