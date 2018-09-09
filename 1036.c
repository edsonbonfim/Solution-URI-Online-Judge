#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;

	scanf("%lf%lf%lf", &a, &b, &c);

	double delta = (b*b)-(4*a*c);

	if (a == 0 || delta < 0)
	{
		printf("Impossivel calcular\n");
		return 0;
	}

	double raiz = sqrt(delta);

	printf("R1 = %.5lf\n", (-b+raiz)/(2*a));
	printf("R2 = %.5lf\n", (-b-raiz)/(2*a));

	return 0;
}
