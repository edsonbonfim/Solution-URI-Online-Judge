#include <stdio.h>
#include <malloc.h>

float *ordenar(float *v)
{
	float *res = (float *) malloc(3 * sizeof(float));

	if (v[0] >= v[1] && v[0] >= v[2]) {
		res[0] = v[0];
		res[1] = (v[1] >= v[2]) ? v[1] : v[2];
		res[2] = (v[1] >= v[2]) ? v[2] : v[1];
	}

	if (v[1] >= v[0] && v[1] >= v[2]) {
		res[0] = v[1];
		res[1] = (v[0] >= v[2]) ? v[0] : v[2];
		res[2] = (v[0] >= v[2]) ? v[2] : v[0];
	}

	if (v[2] >= v[0] && v[2] >= v[1]) {
		res[0] = v[2];
		res[1] = (v[0] >= v[1]) ? v[0] : v[1];
		res[2] = (v[0] >= v[1]) ? v[1] : v[0];
	}

	return res;
}

int main()
{
	float *v = (float *) malloc(3 * sizeof(float));

	scanf("%f%f%f", &v[0], &v[1], &v[2]);

	v = ordenar(v);

	if (v[0] >= v[1]+v[2])
	{
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	}

	if (v[0]*v[0] == v[1]*v[1]+v[2]*v[2])
		printf("TRIANGULO RETANGULO\n");

	else if (v[0]*v[0] > v[1]*v[1]+v[2]*v[2])
		printf("TRIANGULO OBTUSANGULO\n");

	else if (v[0]*v[0] < v[1]*v[1]+v[2]*v[2])
		printf("TRIANGULO ACUTANGULO\n");

	if (v[0] == v[1] && v[0] == v[2])
		printf("TRIANGULO EQUILATERO\n");

	else if (v[0] == v[1] || v[0] == v[2] || v[1] == v[2])
		printf("TRIANGULO ISOSCELES\n");

	free(v);

	return 0;
}
