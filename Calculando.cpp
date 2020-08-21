#include <stdio.h>
 
int main(){
    
    signed int num;
    char sinal;
    int m, i, z, soma; 
    for (z = 1; z <= 100; z++){
        soma = 0;
        scanf("%i", &m);
        if (m != 0){
           for (i = 0; i < m; i++){
               scanf ("%i", &num);
               soma = soma + num;           
           }
           printf("Teste %i\n", z);    
           printf("%i\n", soma);
        }
        else {
             break;     
        }
    }   
    
    return 0;   
} 
