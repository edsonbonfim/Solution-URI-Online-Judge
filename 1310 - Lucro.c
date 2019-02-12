#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, c, res, soma, receita[50];

    while(scanf("%d", &n) != EOF)
    {
        res = soma = 0;

        scanf("%d", &c);

        for (i = 0; i < n; i++)
        {
            scanf("%d", &receita[i]);
            soma += receita[i] - c;
            if (soma < 0)
                soma = 0;
            res = soma > res ? soma : res;
        }

        printf("%d\n", res);
    }
}
