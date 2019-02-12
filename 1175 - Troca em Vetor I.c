#include <stdio.h>

int func(int x)
{
    if (x == -1)
        return 0;

    int n;

    scanf("%d", &n);

    func(x-1);

    printf("N[%d] = %d\n", x, n);
}

int main()
{
    return func(19);
}
