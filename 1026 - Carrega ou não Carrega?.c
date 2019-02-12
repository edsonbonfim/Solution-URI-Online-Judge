#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long int a, b;

    while (scanf("%lu", &a) != EOF)
    {
        scanf("%lu", &b);
        printf("%lu\n", a ^ b);
    }

    return 0;
}
