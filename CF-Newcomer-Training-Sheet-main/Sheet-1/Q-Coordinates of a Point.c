#include <stdio.h>
int main()
{
    float x, y;
    scanf("%f %f", &x, &y);
    if (0 < x && 0 < y)
        printf("Q1");
    else if (x < 0 && 0 < y)
        printf("Q2");
    else if (x < 0 && y < 0)
        printf("Q3");
    else if (x > 0 && y < 0)
        printf("Q4");
    else if (x == 0 && y == 0)
        printf("Origem");
    else if ((x > 0 || x < 0) && y == 0)
        printf("Eixo X");
    else if (x == 0 && (y > 0 || 0 > y))
        printf("Eixo Y");
    return 0;
}
