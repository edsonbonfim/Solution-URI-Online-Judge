#include <stdio.h>

int main()
{
    float n;
    int i, cont = 0;

    for(i = 0; i < 6; i++)
    {
        scanf("%f", &n);
        if (n > 0)
            cont++;
    }

    printf("%d valores positivos\n", cont);

    return 0;
}
