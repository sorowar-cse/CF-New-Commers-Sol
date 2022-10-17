#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    int n, m;
    scanf("%d\n", &n);
    for (int l = 0; l < n; l++)
    {
        gets(s);
        int flag = 0;
        int len = strlen(s);
        for (m = 0; m < (len - 2); m++)
        {
            if (s[m] == '0' && s[m + 1] == '1' && s[m + 2] == '0')
            {
                flag = 1;
                break;
            }
            else if (s[m] == '1' && s[m + 1] == '0' && s[m + 2] == '1')
            {
                flag = 1;

                break;
            }
        }
        if (flag == 1)
            printf("Good\n");
        else
            printf("Bad\n");
    }

    return 0;
}