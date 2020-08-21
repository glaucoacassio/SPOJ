#include <iostream>
using namespace std;
 
int main(int argc, char *argv[])
{
	long long int A, N, F, Fotons, qtde_estrelas = 0;
	
	cin>> A >> N;
	for(int i = 0; i < N; i++)
	{
		cin>> F;
		Fotons = (F*A)/40000000;
		if(Fotons >= 1) qtde_estrelas++;
	}
	cout<< qtde_estrelas <<endl;
	
	return 0;
} 
