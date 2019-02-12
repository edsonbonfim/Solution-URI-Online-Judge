#include <stdio.h>

int main()
{
	int i, cod, num;
	double valor, total = 0;

	for (i = 0; i < 2; i++) {
		scanf("%d%d%lf", &cod, &num, &valor);
		total += num*valor;
	}

	printf("VALOR A PAGAR: R$ %.2lf\n", total);

	return 0;
}
