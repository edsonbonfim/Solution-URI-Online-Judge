#include <stdio.h>
#include <string.h>

#define N (int) 1e5+1

int aux[N];

int atualizar(int i, int val, int n)
{ 
    for (; i < n; i += i & -i)
        aux[i] += val;
}

int soma(int i)
{
    return (i > 0) ? aux[i] + soma(i - (i & -i)) : 0;
}

int main()
{
    char c;
    int i, n, vet[N] = {0};

    scanf("%d", &n);

    memset(aux, 0, sizeof aux);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &vet[i]);
        atualizar(i, vet[i], n);
    }

    while(scanf(" %c%d", &c, &i) != EOF)
    {
        if (c == 'a')
            atualizar(i, -vet[i], n);
        else
            printf("%d\n", soma(i-1));
    }

    return 0;
}
