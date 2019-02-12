#include <stdio.h>

#define N 3.14159

int main()
{
	double raio;

	scanf("%lf", &raio);

	printf("A=%.4lf\n", N*raio*raio);

	return 0;
}
