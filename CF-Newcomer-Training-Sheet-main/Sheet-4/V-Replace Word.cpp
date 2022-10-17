#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<char> data;
    char ch;
    while (cin >> ch)
        data.push_back(ch);
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i] == 'E' && data[i + 1] == 'G' && data[i + 2] == 'Y' && data[i + 3] == 'P' && data[i + 4] == 'T')
        {
            i = i + 4;
            cout << " ";
            continue;
        }
        cout << data[i];
    }
}
