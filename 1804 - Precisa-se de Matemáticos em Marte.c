#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vet[100001] = {0};
int aux[100001];

void update(int i, int val, int tam)
{
    if (i > tam)
        return;

    aux[i] += val;

    update(i + (i & (-i)), val, tam);
}

int get(int pos)
{
    int soma = 0;

    while (pos > 0)
    {
        soma += aux[pos];
        pos -= pos & (-pos);
    }

    return soma;
}

int main()
{
    int N, i;

    scanf("%d", &N);

    memset(aux, 0, sizeof aux);

    for (i = 1; i <= N; i++)
    {
        scanf(" %d", &vet[i]);
        update(i, vet[i], N);
    }

    char c;
    int x;

    while (scanf(" %c %d", &c, &x) == 2)
    {
        if (c == 'a')
            update(x, -vet[x], N);
        else
            printf("%d\n", get(x-1));
    }

    return 0;
}
