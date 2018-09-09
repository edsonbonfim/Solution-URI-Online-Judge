#include <stdio.h>

int main()
{
	double valor;

	scanf("%lf", &valor);

	int n = (int) valor;

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", (n/100));
	printf("%d nota(s) de R$ 50.00\n",  (n%100)/50);
	printf("%d nota(s) de R$ 20.00\n",  (n%100%50)/20);
	printf("%d nota(s) de R$ 10.00\n",  (n%100%50%20)/10);
	printf("%d nota(s) de R$ 5.00\n",   (n%100%50%20%10)/5);
	printf("%d nota(s) de R$ 2.00\n",   (n%100%50%20%10%5)/2);

	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", (n%100%50%20%10%5%2));

	n = (valor - n) * 100;

	printf("%d moeda(s) de R$ 0.50\n", (n/50));
	printf("%d moeda(s) de R$ 0.25\n", (n%50)/25);
	printf("%d moeda(s) de R$ 0.10\n", (n%50%25)/10);
	printf("%d moeda(s) de R$ 0.05\n", (n%50%25%10)/5);
	printf("%d moeda(s) de R$ 0.01\n", (n%50%25%10%5));

	return 0;
}
