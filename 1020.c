#include <stdio.h>

int main()
{
	int idade;

	scanf("%d", &idade);

	printf("%d ano(s)\n", idade/365);
	printf("%d mes(es)\n", (idade%365)/30);
	printf("%d dia(s)\n", idade%365%30);

	return 0;
}
