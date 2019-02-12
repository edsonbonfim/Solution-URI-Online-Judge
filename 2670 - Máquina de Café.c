#include <stdio.h>

void main()
{
    int a1, a2, a3;

    scanf("%d %d %d", &a1, &a2, &a3);

    //a1
    int s1 = a2*2 + a3*4;

    //a2
    int s2 = a1*2 + a3*2, s3 = a1*4 + a2*2;



    if (s1 <= s2 && s1 <= s3)
    {
        printf("%d\n", s1);
    }
    else if (s2 <= s1 && s2 <= s3)
    {
        printf("%d\n", s2);
    }
    else
    {
        printf("%d\n", s3);
    }
}
