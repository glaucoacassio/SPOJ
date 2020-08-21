#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void) {
	int i, a, b, N, count = 1;
	char primeiroP[10], segundoI[10];
	
	while(scanf("%d", &N) && N != 0) {
		scanf("%s %s", primeiroP, segundoI);
		
		int soma[30]; 
		
		for(i = 0; i<N; i++) {
			soma[i]= 0;
			scanf("%d %d", &a, &b); 
			soma[i] = (a + b) % 2 == 0 ? 1 : 0; 
		}
		
		void imprimirResultado() {
			int j;
			
			printf("\n\nTeste %d\n", count++);
				
			for(j = 0; j<N; j++) {
				if(soma[j]) printf("%s\n", primeiroP);
				else printf("%s\n", segundoI);
			}
			printf("\n");
		}
		
		imprimirResultado();
	}
 
	return EXIT_SUCCESS;
}//fim do programa
 
