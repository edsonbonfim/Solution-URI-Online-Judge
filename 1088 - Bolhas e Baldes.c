#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int count;

int *merge(int *v1, int *v2, int n1, int n2)
{
    int *res = malloc((n1+n2) * sizeof(int));

    int i, j, k;

    for (i = j = k = 0; i < n1 && j < n2; k++)
    {
        if (v1[i] <= v2[j])
            res[k] = v1[i++];
        else
        {
            res[k] = v2[j++];
            count += n1-i;
        }
    }

    for (; i < n1; i++, k++)
        res[k] = v1[i];

    for (; j < n2; j++, k++)
        res[k] = v2[j];

    return res;
}

int *mergesort(int *vet, int n)
{
    if (n == 1)
        return vet;

    int meio = (int) ceil((double) n/2);

    return merge(mergesort(vet, meio), mergesort(vet+meio, n-meio), meio, n-meio);
}

int main()
{
    int i, n, p[100001];

    while (1)
    {
        scanf("%d", &n);

        if (n == 0)
            break;

        for (i = 0; i < n; i++)
            scanf("%d", &p[i]);

        count = 0;
        mergesort(p, n);

        if (count%2 == 0)
            printf("Carlos\n");
        else
            printf("Marcelo\n");
    }

    return 0;
}
