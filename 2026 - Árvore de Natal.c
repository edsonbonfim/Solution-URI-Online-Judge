#include <stdio.h>
#include <string.h>

int memo[101][1001];

typedef struct
{
    int e, pc;
} Pacote;

int max(int a, int b)
{
    return a > b ? a : b;
}

int maxEnfeites(int w, Pacote *pacote, int p)
{
    if (p == 0 || w <= 0)
        return 0;

    if (memo[p][w] != -1)
        return memo[p][w];

    if (pacote->pc > w)
        return memo[p][w] = maxEnfeites(w, pacote+1, p-1);

    return memo[p][w] = max(maxEnfeites(w, pacote+1, p-1), maxEnfeites(w-pacote->pc, pacote+1, p-1)+pacote->e);
}

int main()
{
    int i, j, g, p, w;

    Pacote pacote[100];

    scanf("%d", &g);

    for (i = 1; i <= g; i++)
    {
        scanf("%d%d", &p, &w);

        for(j = 0; j < p; j++)
            scanf("%d%d", &pacote[j].e, &pacote[j].pc);

        memset(memo, -1, 101 * 1001 * sizeof(int));

        printf("Galho %d:\nNumero total de enfeites: %d\n\n", i, maxEnfeites(w, pacote, p));
    }

    return 0;
}
