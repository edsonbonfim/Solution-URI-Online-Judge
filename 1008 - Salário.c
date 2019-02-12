#include <stdio.h>

int main()
{
	int n, hrs;
	double valor;

	scanf("%d%d%lf", &n, &hrs, &valor);

	printf("NUMBER = %d\nSALARY = U$ %.2lf\n", n, hrs*valor);

	return 0;
}
