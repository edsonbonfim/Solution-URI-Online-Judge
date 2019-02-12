#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int i, n, q, *valor, index, k = 1;
    int marmores[10001], consultas[10001];

    while (1)
    {
        scanf("%d%d", &n, &q);

        if (n == 0 && q == 0)
            break;

        for (i = 0; i < n; i++)
            scanf("%d", &marmores[i]);

        for (i = 0; i < q; i++)
            scanf("%d", &consultas[i]);

        qsort(marmores, n, sizeof(int), cmp);

        printf("CASE# %d:\n", k);
        k++;

        for (i = 0; i < q; i++)
        {
            valor = bsearch(&consultas[i], marmores, n, sizeof(int), cmp);

            if (valor == NULL)
            {
                printf("%d not found\n", consultas[i]);
            }
            else
            {
                index = valor - marmores;

                while (marmores[index-1] == consultas[i])
                    index--;

                printf("%d found at %d\n", consultas[i], index+1);
            }
        }
    }

    return 0;
}
