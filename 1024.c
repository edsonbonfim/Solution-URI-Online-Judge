#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <ctype.h>

void criptografar(char *texto)
{
	printf("FOI %d\n", strlen(texto));
	
	int k = 0;
	char i = texto[k];
	
	while (i != '\n') {
		if (isalpha(i))
			texto[k] += 3;

		i = texto[++k];
	}

	printf("%s\n", texto);
}

int main()
{
	int n, i;
	
	scanf("%d", &n);

	char **texto = (char **) malloc(n * sizeof(char *));

	for (i = 0; i < n; i++) {
		texto[i] == (char *) malloc(1001 * sizeof(char));
		scanf("%s", texto[i]);
		criptografar(texto[i]);
	}

	return 0;
}
