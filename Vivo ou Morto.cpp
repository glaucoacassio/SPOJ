#include <cstdio>
#include <iostream>
 
using namespace std;
 
int main() {
	int P, //Numero de partidas
		R, //Numero de rodadas
		N = 1,//Numero de casos de teste
		posicao,//Acao do participante dessa posicao
		acao,//Acao executadas pelos participantes
		npart,//Numero de participantes 
		part[100],//Participantes do jogo
		ordem;//Ordem do chefe
	
	while(scanf("%d %d", &P, &R) && P && R) 
	{
 
       for(int i = 0; i < P; i++)
	   	   scanf("%d",&part[i]);
		   	   	
	   for(int i = 0; i < R; i++)
	   {   			
		   scanf("%d %d", &npart, &ordem);	
		   
		     	int posicao = 0;   
		   
		     for(int j = 0; j < npart; j++)
		   {
			   scanf("%d",&acao);
			   if(acao == ordem)//5 0 0 1 0 1 0 
			   	   posicao++;
			   else
			   	   for(int k = posicao + 1; k < npart; k++) part[k-1] = part[k];
		   }
	   }
	   
	   printf("Teste %d\n%d\n\n",N++, part[0]);	  
	}
	
	return 0;
} 
