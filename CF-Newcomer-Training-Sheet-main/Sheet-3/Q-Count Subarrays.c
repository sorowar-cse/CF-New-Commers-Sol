#include <stdio.h>

int v_Subs(int a[], int count)
{
    int c = 0, mx = a[0];
    for (int i = 0; i < count; i++)
    {
        if (a[i] >= mx)
        {
            mx = a[i];
            c = 1;
        }
        else
        {
            c = 0;
            break;
        }
    }
    return c;
}
int main()
{
    int Tc;
    scanf("%d", &Tc);
    while (Tc--)
    {
        int i, j, k, l, n, d, count = 0, cnt;
        int a[10009], b[10009], mx;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (i = 0; i < n; i++)
        {
            cnt = 0;
            for (j = i, k = 0; j < n; j++, k++)
            {
                b[k] = a[j];
                cnt++;
                int value = v_Subs(b, cnt);
                count += value;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
