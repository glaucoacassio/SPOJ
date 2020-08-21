#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5
 
int main(void) {
	int i, j;
	float aux, numero[10]; 
	
	for(i = 0; i < TAM; i++) { 
		scanf("%f",&numero[i]); 
	} 
	
	//Algoritmo de ordenação BubbleSort
	for(j = 0; j < TAM; j++) { 
		for (i = 0; i < TAM - 1; i++) {
     		if (numero[i] > numero[i + 1]) {
       			aux = numero[i];
       			numero[i] = numero[i + 1];
       			numero[i + 1] = aux;
       		}
       	}
	} 
	printf("%.1f\n", (numero[1] + numero[2] + numero[3]));
	
	return EXIT_SUCCESS;
}
