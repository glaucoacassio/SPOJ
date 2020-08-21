#include <iostream>
#include <cstdio>
#include <math.h>
 
using namespace std;
/*
long long int solucao = 0;
	
void Hanoi(int N, char origem, char destino, char aux)
{
	solucao++;
	
	if(N == 1)
	{
		//printf("Mova o disco 1 de %c para %c\n", origem, destino);
		return;
	}
	else
	{
		Hanoi(N - 1, origem, aux, destino);
		//printf("Mova o disco %d de %c para %c\n", N, origem, destino);
		Hanoi(N - 1, aux, destino, origem);
	}
}
*/
 
int main(int argc, char** argv)
{
	int N, Nro = 1;
	long long int solucao;
	
	while(scanf("%d", &N) && N != 0)
	{
		//por recorrencia se chega a essa formula
		solucao = pow(2, N) - 1;   	
		
//		Hanoi(N, 'A', 'B', 'C');
		printf("Teste %d\n%lli\n\n",Nro++, solucao);
//		solucao = 0;
	}
	
	return 0;
}
	
