#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void) {
	int bit, nota50, nota10, nota5, nota1;
	int count = 1;
	
	while(scanf("%d", &bit) && bit != 0) {
		nota50 = bit/50;
		nota10 = (bit % 50)/10;
		nota5 = (bit % 10)/5;
		nota1 = (bit % 5)/1;
		
		printf("Teste %0d\n%d %d %d %d\n\n", count++, nota50, nota10, nota5, nota1);
	}
	
	return EXIT_SUCCESS;
}
