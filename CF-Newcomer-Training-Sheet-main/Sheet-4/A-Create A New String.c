#include <stdio.h>
#include <string.h>
int main()
{
    char S[1001], T[1000];
    gets(S);
    gets(T);
    int len1 = strlen(S), len2 = strlen(T);
    printf("%d %d\n", len1, len2);
    printf("%s %s\n", S, T);
    return 0;
}
