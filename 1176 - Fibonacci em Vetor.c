#include <stdio.h>
#include <string.h>

unsigned long long int memo[61];

unsigned long long int fib(int x)
{
    if (memo[x] != -1)
        return memo[x];

    return memo[x] = fib(x-1) + fib(x-2);
}

int main()
{
    int n, x, i;

    scanf("%d", &x);

    memset(memo, -1, sizeof memo);
    memo[0] = 0;
    memo[1] = 1;

    for (i = 0; i < x; i++)
    {
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, fib(n));
    }

    return 0;
}
