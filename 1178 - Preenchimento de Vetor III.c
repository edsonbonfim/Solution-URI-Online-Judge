#include <stdio.h>

int main()
{
    int i;
    double x;

    scanf("%lf", &x);

    printf("N[0] = %.4lf\n", x);

    for (i = 1; i < 100; i++)
    {
        x /= 2;
        printf("N[%d] = %.4lf\n", i, x);
    }

    return 0;
}
