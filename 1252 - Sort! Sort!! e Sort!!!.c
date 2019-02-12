#include <stdio.h>
#include <stdlib.h>

int m;

int cmp(const void *_a, const void *_b)
{
    int a = *(int*) _a;
    int b = *(int*) _b;

    if (a%m == b%m) // empate pelo modulo
    {
        if (a%2 != 0 || b%2 != 0) // pelo menos um impar
        {
            if (a%2 == 0) // primeiro eh par
            {
                return 1;
            }
            else if (b%2 == 0) // segundo eh par
            {
                return -1;
            }
            else // ambos sao impar
            {
                return -(a-b);
            }
        }
        else if (a%2 == 0 && b%2 == 0) // ambos par
        {
            return a-b;
        }
    }

    return a%m - b%m;
}

int main()
{
    int i, n;

    long int vet[10001];

    while (1)
    {
        scanf("%d%d", &n, &m);

        if (n == 0 && m == 0)
            break;

        for (i = 0; i < n; i++)
            scanf("%ld", &vet[i]);

        qsort(vet, n, sizeof(int), cmp);

        printf("%d %d\n", n, m);

        for (i = 0; i < n; i++)
            printf("%ld\n", vet[i]);
    }

    printf("0 0\n");

    return 0;
}
