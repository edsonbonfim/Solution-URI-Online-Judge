#include <stdio.h>

int main()
{
    int i, aux;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &aux);
        aux = aux <= 0 ? 1 : aux;
        printf("X[%d] = %d\n", i, aux);
    }

    return 0;
}
