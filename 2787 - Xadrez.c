#include <stdio.h>

int ehPar(int x)
{
    return x%2 == 0;
}

int main()
{
    int l, c;

    scanf("%d%d", &l, &c);

    if (ehPar(c))
    {
        if (ehPar(l))
            printf("1\n");
        else
            printf("0\n");
    }
    else
    {
        if (ehPar(l))
            printf("0\n");
        else
            printf("1\n");
    }

    return 0;
}
