#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    int i, j, k, n, x, y, num, rack[100000], s1, s2;

    while (scanf("%d", &n) != EOF)
    {
        j = 0;

        for (k = 0; k < n; k++)
        {
            scanf("%d%d", &x, &y);

            for (i = x; i <= y; i++)
                rack[j++] = i;
        }

        scanf("%d", &num);

        sort(rack, rack+j);

        s1 = lower_bound(rack, rack+j, num) - rack;
        s2 = upper_bound(rack, rack+j, num) - rack;

        if (s1 < s2)
            printf("%d found from %d to %d\n", num, s1, s2-1);
        else
            printf("%d not found\n", num);
    }
    
    return 0;
}
