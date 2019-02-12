#include <stdio.h>
#include <string.h>

int memo[101][601];

typedef struct
{
    int d, p;
} Atracao;

int max(int a, int b)
{
    return a > b ? a : b;
}

int maxAtracoes(int t, Atracao *atracao, int n)
{
    if (n == 0 || t <= 0)
        return 0;

    if (memo[n][t] != -1)
        return memo[n][t];

    if (atracao->d > t)
        return memo[n][t] = maxAtracoes(t, atracao+1, n-1);

    return memo[n][t] = max(maxAtracoes(t, atracao+1, n-1), maxAtracoes(t-atracao->d, atracao, n)+atracao->p);
}

int main()
{
    int i, n, t, h = 1;
    
    Atracao atracao[100];

    while (1)
    {
        scanf("%d%d", &n, &t);

        if (n == 0)
            break;

        for (i = 0; i < n; i++)
            scanf("%d%d", &atracao[i].d, &atracao[i].p);
        
        memset(memo, -1, 101 * 601 * sizeof(int));

        printf("Instancia %d\n%d\n\n", h++, maxAtracoes(t, atracao, n));
    }

    return 0;
}
