#include <stdio.h>
#include <string.h>

int memo[21][31];

typedef struct
{
    int n, t;
} Pizza;

int max(int a, int b)
{
    return a > b ? a : b;
}

int maxPizza(int p, Pizza *pizza, int n)
{
    if (n == 0 || p <= 0)
        return 0;

    if (memo[n][p] != -1)
        return memo[n][p];

    if (pizza->n > p)
        return memo[n][p] = maxPizza(p, pizza+1, n-1);

    return memo[n][p] = max(maxPizza(p, pizza+1, n-1), maxPizza(p-pizza->n, pizza+1, n-1)+pizza->t);
}

int main()
{
    int i, n, p;

    Pizza pizza[30];

    while (1)
    {
        scanf("%d%d", &n, &p);

        if (n == 0)
            break;

        for (i = 0; i < n; i++)
            scanf("%d%d", &pizza[i].t, &pizza[i].n);

        memset(memo, -1, 21 * 31 * sizeof(int));

        printf("%d min.\n", maxPizza(p, pizza, n));
    }

    return 0;
}
