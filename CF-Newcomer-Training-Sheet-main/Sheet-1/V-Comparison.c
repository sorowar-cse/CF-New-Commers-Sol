#include <stdio.h>
int main()
{
    int A, B, C;
    char S, Q;
    scanf("%d", &A);
    scanf(" %c", &S);
    scanf(" %d", &B);
    switch (S)
    {
    case '>':
    {
        if (A > B)
            printf("Right");
        else
            printf("Wrong");
        break;
    }
    case '<':
    {
        if (A < B)
            printf("Right");
        else
            printf("Wrong");
        break;
    }
    case '=':
    {
        if (A == B)
            printf("Right");
        else
            printf("Wrong");
        break;
    }
    }
    return 0;
}
