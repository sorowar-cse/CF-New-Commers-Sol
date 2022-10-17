#include <stdio.h>
int main()
{
    int s, k, x, y, z, count = 0;
    scanf("%d %d", &s, &k);
    for (x = 0; x <= s; x++)
    {
        for (y = 0; y <= s; y++)
        {
            z = k - x - y;
            if (z >= 0 && z <= s)
                count++;
        }
    }
    printf("%d", count);
}