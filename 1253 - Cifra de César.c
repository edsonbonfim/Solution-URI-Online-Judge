#include <stdio.h>

int main()
{
    int i, j, n, quant;
    char str[51];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf(" %s", str);
        scanf("%d", &quant);

        for (j = 0; str[j] != '\0'; j++)
            
            if (str[j] - quant < 'A')
                str[j] += 26 - quant;
            else
                str[j] -= quant;

        printf("%s\n", str);
    }
}
