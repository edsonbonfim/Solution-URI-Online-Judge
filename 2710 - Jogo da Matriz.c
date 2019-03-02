#include <stdio.h>
#include <string.h>

#define N 501

int aux[N][N] = {0};

void add(int x1, int y1, int x2, int y2, int val)
{
    int i, j;

    for (i = x1; i < x2; i += i & -i)
        for (j = y1; j < y2; j += j & -j)
            aux[i][j] += val;
}

int soma(int i, int j)
{
    int resp = 0;

    for(; i > 0; i -= i & -i)
        for(; j > 0; j -= j & -j)
            resp += aux[i][j];

    return resp;
}

int main()
{
    char c;
    int k, i, j, q, x, y, z, w, v;

    memset(aux, 0, sizeof aux);

    scanf(" %d", &q);

    for (k = 0; k < q; k++)
    {
        scanf(" %c", &c);

        if (c == 'U')
        {
            scanf("%d%d%d%d%d", &x, &y, &z, &w, &v);
            add(x, y, z, w, v);
        }
        else
        {
            scanf("%d%d", &x, &y);
            printf("%d\n", soma(x, y));
        }
    }
}