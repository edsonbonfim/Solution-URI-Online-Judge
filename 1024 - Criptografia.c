#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void inverte(char *str)
{
    int n = strlen(str) - 1;

    char *buff = malloc((n+1) * sizeof(char));

    int i, j;

    for (i = 0, j = n; i <= n; i++, j--)
        buff[i] = str[j];

    for (i = 0; i <= n; i++)
        str[i] = buff[i];

    free(buff);
}

int main()
{
    int i, n, k, tam;
    char msg[10000];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf(" %[^\n]s", msg);

        tam = strlen(msg);

        for (k = 0; k < tam; k++)
            if ((msg[k] >= 'a' && msg[k] <= 'z') || (msg[k] >= 'A' && msg[k] <= 'Z'))
                msg[k] += 3;

        inverte(msg);

        int meio = tam/2;

        for (k = meio; k < tam; k++)
            msg[k] -= 1;

        printf("%s\n", msg);
    }
}