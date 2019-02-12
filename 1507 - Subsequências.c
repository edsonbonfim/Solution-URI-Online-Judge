#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int i, n, q, j, k;
    char seq[100000], sub[100], *c;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s%d", seq, &q);
        
        for (j = 0; j < q; j++)
        {
            scanf("%s", sub);

            c = seq;

            for (k = 0; sub[k] != '\0'; k++)
            {
                printf("%d", strlen(c));
                
                c = (char *) bsearch(&sub[k], c, strlen(c), sizeof(char), cmp);

                if (c == NULL)
                {
                    printf("No\n");
                    break;
                }
            }

            if (c != NULL)
                printf("Yes\n");
        }
    }
}
