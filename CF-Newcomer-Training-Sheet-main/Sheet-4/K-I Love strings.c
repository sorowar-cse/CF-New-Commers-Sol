#include <stdio.h>
#include <string.h>
int main()
{
    int N, n;
    scanf("%d\n", &N);
    for (n = 0; n < N; n++)
    {
        char S[101], T[101];
        int i, j, s, t;
        // gets(S);
        //  gets(T);
        scanf("%s %s\n", S, T);
        for (s = 0; S[s] != '\0';)
            s++;

        for (t = 0; T[t] != '\0';)
            t++;

        for (i = 0; S[i] != '\0' && T[i] != '\0'; i++)
            printf("%c%c", S[i], T[i]);

        if (s < t)
            while (T[s] != '\0')
            {
                printf("%c", T[s]);
                s++;
            }

        else
            while (S[t] != '\0')
            {
                printf("%c", S[t]);
                t++;
            }
        printf("\n");
    }
    return 0;
}
