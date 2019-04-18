#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef char *String;

typedef struct arvore
{
    char s[5000];
    struct arvore *esq;
    struct arvore *dir;
} arvore;

arvore *inserir(arvore *a, String s)
{
    if (a == NULL)
    {
        a = (arvore *)malloc(sizeof(arvore));
        strcpy(a->s, s);
        a->esq = NULL;
        a->dir = NULL;
        return a;
    }

    int cmp = strcmp(a->s, s);

    if (cmp == 0)
        return a;

    if (cmp > 0)
    {
        a->esq = inserir(a->esq, s);
        return a;
    }

    if (cmp < 0)
    {
        a->dir = inserir(a->dir, s);
        return a;
    }
}

void imprimir(arvore *a)
{
    if (a != NULL)
    {
        imprimir(a->esq);
        printf("%s\n", a->s);
        imprimir(a->dir);
    }
}

int main()
{
    int l, i;
    char s[10005];
    char *pch;
    arvore *a;

    while (scanf("%s", s) == 1)
    {
        getchar();
        l = strlen(s);

        if (!l)
            continue;

        for (i = 0; i < l; i++)
        {
            s[i] = tolower(s[i]);
            if (s[i] < 'a' || s[i] > 'z')
                s[i] = 32;
        }

        pch = strtok(s, " ");

        while (pch != NULL)
        {
            if (strlen(pch) != 0)
                a = inserir(a, pch);
            pch = strtok(NULL, " ");
        }
    }

    imprimir(a);

    return 0;
}
