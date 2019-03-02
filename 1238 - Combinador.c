#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *merge(char *s1, char *s2)
{
    int n1 = strlen(s1);
    int n2 = strlen(s2);

    char *resp = malloc(n1+n2+1);

    int i, j, k;

    for(i = j = k = 0; i < n1 && j < n2; k++)
        resp[k] = i <= j ? s1[i++] : s2[j++];

    while (i < n1)
        resp[k++] = s1[i++];

    while (j < n2)
        resp[k++] = s2[j++];

    resp[k] = '\0';

    return resp;
}

int main()
{
    int i, n;
    char s1[51], s2[51];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf(" %s%s", s1, s2);
        printf("%s\n", merge(s1, s2));
    }
}
