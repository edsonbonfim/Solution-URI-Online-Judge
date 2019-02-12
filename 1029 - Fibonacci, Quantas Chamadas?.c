#include <stdio.h>

int calls = 0;

int fib(int n)
{
    calls++;

    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fib(n-1) + fib(n-2);
}

int main()
{
    int i, n, x;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        printf("fib(%d) = %d calls = %d\n", x, calls-1, fib(x));
        calls = 0;
    }
}
