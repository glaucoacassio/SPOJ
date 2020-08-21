#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void) {
	int i, numero, vet[5001];
	int soma = 0;
	
	scanf("%d\n", &numero);
	
	for(i = 0; i<numero; i++) {
		scanf("%d", &vet[i]);
		soma += vet[i];
	}
	printf("%d\n", soma);
	
	return EXIT_SUCCESS;
}
