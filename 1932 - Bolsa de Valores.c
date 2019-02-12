#include <stdio.h>
#include <string.h>

int memo[200001][2];

int max(int a, int b)
{
    return a > b ? a : b;
}

int maxValor(int *acao, int n, int c, int comprou, int pos)
{
    if (pos == n)
        return 0;

    if (memo[pos][comprou] != -1)
        return memo[pos][comprou];

    if (!comprou)
        return memo[pos][comprou] = max(maxValor(acao, n, c, 0, pos+1), maxValor(acao, n, c, 1, pos+1) - acao[pos] - c);

    return memo[pos][comprou] = max(maxValor(acao, n, c, 1, pos+1), maxValor(acao, n, c, 0, pos+1) + acao[pos]);
}

int main()
{
    int i, n, c, acao[200001];

    scanf("%d%d", &n, &c);

    memset(memo, -1, sizeof memo);

    for (i = 0; i < n; i++)
        scanf("%d", &acao[i]);

    printf("%d\n", max(maxValor(acao, n, c, 0, 0), maxValor(acao, n, c, 1, 0) - acao[0] - c));

    return 0;
}
