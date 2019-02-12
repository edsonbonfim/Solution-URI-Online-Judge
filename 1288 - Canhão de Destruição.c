#include <stdio.h>
#include <string.h>

int memo[51][101];

typedef struct
{
    int poder, peso;
} Projetil;

int max(int a, int b)
{
    return a > b ? a : b;
}

int maxProjeteis(int k, Projetil *projetil, int n)
{
    if (n == 0 || k <= 0)
        return 0;

    if (memo[n][k] != -1)
        return memo[n][k];

    if (projetil->peso > k)
        return memo[n][k] = maxProjeteis(k, projetil+1, n-1);

    return memo[n][k] = max(maxProjeteis(k, projetil+1, n-1), maxProjeteis(k-projetil->peso, projetil+1, n-1)+projetil->poder);
}

int main()
{
    int i, j, k, caso, n, R;

    scanf("%d", &caso);

    Projetil projetil[51];

    for(i = 0; i < caso; i++)
    {
        scanf("%d", &n);

        for (j = 0; j < n; j++)
            scanf("%d%d", &projetil[j].poder, &projetil[j].peso);

        scanf("%d%d", &k, &R);

        memset(memo, -1, sizeof memo);

        if (maxProjeteis(k, projetil, n) < R)
            printf("Falha na missao\n");
        else
            printf("Missao completada com sucesso\n");
    }

    return 0;
}
