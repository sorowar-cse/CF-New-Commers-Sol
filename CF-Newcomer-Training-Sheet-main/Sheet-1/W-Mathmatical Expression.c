#include <stdio.h>
int main()
{
    int A, B, C, sum, sub, mul;
    char S, Q;
    scanf("%d ", &A);
    scanf("%c ", &S);
    scanf("%d ", &B);
    scanf("%c ", &Q);
    scanf("%d", &C);
    switch (S)
    {
    case '+':
    {
        sum = A + B;
        if (sum == C)
            printf("Yes");
        else
            printf("%d", sum);
        break;
    }
    case '-':
    {
        sub = A - B;
        if (sub == C)
            printf("Yes");
        else
            printf("%d", sub);
        break;
    }
    case '*':
    {
        mul = A * B;
        if (mul == C)
            printf("Yes");
        else
            printf("%d", mul);
        break;
    }
    }
    return 0;
}
