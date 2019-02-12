#include <stdio.h>
#include <stdlib.h>

int soma(int *v, int n)
{
    int i, s = 0;

    for (i = 0; i < n; i++)
        s += v[i];

    return s;
}

int main()
{
    int i, s1, s2, n, v[100001];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    int k = n/2;
    for (i=0; i<n; i++)
    {
        s1 = soma(v, k);
        s2 = soma(v+k, n-k);

        if (s1 == s2)
        {
            printf("%d\n", k);
            break;
        }
        else if (s1 > s2)
            k--;
        else
            k++;
    }

    return 0;
}
