#include <stdio.h>

int main()
{
	double n1, n2, n3, n4, media;

	scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);

	media = n1*0.2+n2*0.3+n3*0.4+n4*0.1;

	printf("Media: %.1lf\n", media);

	if (media >= 7)
		printf("Aluno aprovado.\n");

	else if (media < 5)
		printf("Aluno reprovado.\n");

	else {
		printf("Aluno em exame.\n");

		scanf("%lf", &n1);

		printf("Nota do exame: %.1lf\n", n1);

		media = (n1+media)/2;

		if (media >= 5)
			printf("Aluno aprovado.\n");
		else
			printf("Aluno reprovado.\n");

		printf("Media final: %.1lf\n", media);
	}

	return 0;
}
