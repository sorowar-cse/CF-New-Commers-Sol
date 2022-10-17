#include <iostream>
#include <string>
using namespace std;

int main()
{
    char c, s;
    int x;
    scanf("%c", &c);
    x = (c - '0') + 1;
    s = x + '0';
    if (c == 'z')
    {
        s = 'a';
        printf("%c\n", s);
    }
    else
        printf("%c\n", s);
    return 0;
}