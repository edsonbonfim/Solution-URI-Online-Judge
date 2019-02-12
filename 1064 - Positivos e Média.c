#include <stdio.h>

int main()
{
    float n, media = 0;
    int i, cont = 0;

    for(i = 0; i < 6; i++)
    {
        scanf("%f", &n);
        if (n > 0)
        {
            cont++;
            media += n;
        }
    }

    printf("%d valores positivos\n%.1f\n", cont, media/cont);

    return 0;
}
