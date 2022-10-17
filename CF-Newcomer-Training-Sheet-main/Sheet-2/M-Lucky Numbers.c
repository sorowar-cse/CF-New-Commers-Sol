#include <stdio.h>
int main()
{
    int a, b, i, j, r, count = 0, flag = 0, chek = 0;
    scanf("%d%d", &a, &b);
    for (i = a; i <= b; i++)
    {
        flag = 0;
        j = i;
        while (j)
        {
            r = j % 10;
            j = j / 10;
            if (r == 4 || r == 7)
                count++;
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            continue;
        if (count > 0)
        {
            printf("%d ", i);
            chek = 1;
        }
    }
    if (chek == 0)
        printf("%d", -1);
    printf("\n");
    return 0;
}
