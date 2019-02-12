#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int *vet, int ini, int fim, int elem)
{
    int meio = (ini + fim) / 2;

    if (ini > fim)
        return 0;

    if (vet[meio] == elem)
        return 1;

    if (elem < vet[meio])
        return buscaBinaria(vet, ini, meio-1, elem);

    return buscaBinaria(vet, meio+1, fim, elem);
}

int main()
{
    int i, n, k;

    scanf("%d", &n);

    int *c = (int *) malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &c[i]);

    scanf("%d", &k);

    int comp;

    for (i = 0; i < n; i++)
    {
        comp = k - c[i];
        if (buscaBinaria(c, 0, n, comp))
        {
            printf("%d %d\n", c[i], k - c[i]);
            break;
        }
    }

    return 0;
}
