#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j && (n + 1) / 2 != j && (n + 1) / 2 != i)
                printf("\\");
            else if ((n + 1) / 2 == j && (n + 1) / 2 == i && (i + j == n + 1))
                printf("X");
            else if (i + j == n + 1 && (n + 1) / 2 != j && (n + 1) / 2 != i)
                printf("/");
            else
                printf("*");
        }
        cout << endl;
    }
    return 0;
}