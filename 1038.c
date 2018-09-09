#include <stdio.h>

int main()
{
	double lanche[] = {0, 4.00, 4.50, 5.00, 2.00, 1.50};

	int cod, quant;

	scanf("%d%d", &cod, &quant);

	printf("Total: R$ %.2lf\n", lanche[cod]*quant);

	return 0;
}
