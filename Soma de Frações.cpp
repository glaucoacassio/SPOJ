#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdlib.h>
#include <vector>
 
using namespace std;
 
int MDC(int a, int b) 
{
	if(b == 0)  return a;
	return MDC(b, a % b);
}
 
int MMC(int a, int b) 
{
	return a*b/MDC(a, b);
}
 
int main ()
{
	int a, b, c, d, num, den, mdc; 
	
	scanf("%d %d %d %d",&a, &b, &c, &d);
    	num = MMC(b, d);   
	den = ((num/b) * a) + ((num/d) * c);
	mdc = MDC(num, den);
	printf("%d %d\n", den/mdc, num/mdc);
	
	return 0;
}
/*
Calcula o mdc(m,n) usando o algoritmo de Euclides
 
	numerador = O valor de cima
	denominador = O valor de baixo da fracao
	do{
		resto = numerador % denominador;
		numerador = denominador;
		denominador = resto;
	} while(resto != 0);
		
	int mdc = numerador;
 
		
int MDC(int a, int b) {
	int menor;
	if(a>b) menor = b;
	else menor = a;
	
	for(int i = menor; i>=1; i--)
		if(a % i == 0 && b % i == 0)
		
		
    return i; 
}
 
int MDC(int a, int b) {
	if(b == 0)  return a;
	
	return MDC(b, a % b);
}
 
int MMC(int a, int b) {
	return a*b/MDC(a, b);
}
*/ 
