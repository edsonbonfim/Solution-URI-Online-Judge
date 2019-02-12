#include <stdio.h>

int main()
{
    int i, n, k = 0;

    scanf("%d", &n);

    for (i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, k);
        k = k == n-1 ? 0 : k+1;
    }

    return 0;
}
