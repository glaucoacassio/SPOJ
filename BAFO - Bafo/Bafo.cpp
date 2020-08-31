#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void) {
	int i, cont = 0, somaA, somaB;
	int numero, aldo, beto;
	
	while(scanf("%d", &numero) && numero != 0) {	 
		somaA = 0;
		somaB = 0;
		for(i = 0; i<numero; i++) {
			scanf("%d %d", &aldo, &beto);
			somaA += aldo;
			somaB += beto;
		}
		
		somaA > somaB ? printf("\nTeste %d\nAldo\n\n", ++cont) : printf("\nTeste %d\nBeto\n\n", ++cont); 
	}
 
	return EXIT_SUCCESS;
}
 
