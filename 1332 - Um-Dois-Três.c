#include <stdio.h>
#include <string.h>

int main()
{
    int i, n, tam;
    char str[6];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf(" %s", str);

        tam = strlen(str);

        if (tam == 5)
            printf("3\n");
        else
        {
            if ((str[0] != 'o' && str[1] == 'n' && str[2] == 'e')
            ||  (str[0] == 'o' && str[1] != 'n' && str[2] == 'e')
            ||  (str[0] == 'o' && str[1] == 'n' && str[2] != 'e')
            ||  (str[0] == 'o' && str[1] == 'n' && str[2] == 'e'))
                printf("1\n");
            else
                printf("2\n");
        }
    }
}
