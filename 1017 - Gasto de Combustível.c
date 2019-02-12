#include <stdio.h>

int main()
{
	int t, vm;

	scanf("%d%d", &t, &vm);

	int v = t*vm;

	printf("%.3lf\n", v/12.0);

	return 0;
}
