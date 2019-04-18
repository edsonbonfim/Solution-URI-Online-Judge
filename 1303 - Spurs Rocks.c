#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct time
{
    int cod, pont, marcados, recebidos;
} Time;

int cmp(const void *_a, const void *_b)
{
    Time *a = (Time *) _a;
    Time *b = (Time *) _b;

    if (b->pont != a->pont)
        return b->pont - a->pont;

    if (b->recebidos == 0)
        b->recebidos = 1;

    if (a->recebidos == 0)
        a->recebidos = 1;

    float x = (float) b->marcados/b->recebidos;
    float y = (float) a->marcados/a->recebidos;

    if (x != y)
        return x > y;

    if (b->marcados != a->marcados)
        return b->marcados - a->marcados;

    return b->cod - a->cod;
}

int main()
{
    int i, n, x, y, z, w, h = 1;

    Time times[101];

    while (1)
    {
        scanf("%d", &n);

        if (n == 0)
            break;

        if (h > 1)
            printf("\n");

        for (i = 0; i <= n; i++)
        {
            times[i].cod = 0;
            times[i].pont = 0;
            times[i].marcados = 0;
            times[i].recebidos = 0;
        }

        for (i = 0; i < n*(n-1)/2; i++)
        {
            scanf("%d", &x); // time A
            scanf("%d", &y); // pontos time A

            scanf("%d", &z); // time B
            scanf("%d", &w); // pontos time B

            times[x-1].cod = x;
            times[z-1].cod = z;

            times[x-1].marcados += y;
            times[x-1].recebidos += w;

            times[z-1].marcados += w;
            times[z-1].recebidos += y;

            if (y > w)
            {
                times[x-1].pont += 2;
                times[z-1].pont += 1;
            }
            else
            {
                times[z-1].pont += 2;
                times[x-1].pont += 1;
            }
        }

        qsort(times, n, sizeof(Time), cmp);

        printf("Instancia %d\n", h++);
        
        for (i = 0; i < n-1; i++)
            printf("%d ", times[i].cod);

        printf("%d\n", times[i].cod);
    }

    return 0;
}
