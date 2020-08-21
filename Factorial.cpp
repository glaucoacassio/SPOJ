/*
Independentemente do fatorial que eles fornecem.
 
Pegue o nÃºmero ao qual vocÃª recebeu o fatorial.
Divida por 5; se vocÃª receber um decimal, trunque para um nÃºmero inteiro.
Divida por 5 pow 2 = 25; se vocÃª receber um decimal, trunque para um nÃºmero inteiro.
Divida por 5 pow 3 = 125; se vocÃª receber um decimal, trunque para um nÃºmero inteiro.
Continue com potÃªncias cada vez maiores de 5, atÃ© que sua divisÃ£o resulte em um nÃºmero menor que 1. 
Quando a divisÃ£o for menor que 1, pare.
Soma todos os nÃºmeros inteiros que vocÃª obteve em suas divisÃµes. 
Este Ã© o nÃºmero de zeros Ã  direita.
*/
//Funcao pra contar os zeros a direita do fatorial
#include <iostream>
using namespace std;
 
int encontraZeroADireita(int n)
{
    int contador = 0;
 
    for (int i = 5; n / i >= 1; i = i*5)
        contador += n / i;
 
    return contador;
}
 
int main()
{
    int f, n;
 
    cin>> f;
    for (int i=0; i<f; i++)
    {
        cin>> n;
        cout<< encontraZeroADireita(n) << endl;
    }
    return 0;
}
 
