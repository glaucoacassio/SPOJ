
/*******************************************************************\
SOLUÇÃO PROPOSTA:
Leio o número de casos de testes e leio a sequência padrao (proibido) 
e o bracelete. Concateno o bracelete duas vezes em uma só string, para
poder pegar os casos onde o padrão está nas pontas do bracelete. Após
isso, em outra string inverto o padrão original, para pegar os casos
onde o padrão está ao contrário no bracelete. Fazendo isso, basta
procurar no bracelete (duplo) o padrão e o padrão invertido. Caso
ache um dos dois, marco uma flag e uso a flag para decidir se imprime
N ou S em cada caso.
\*******************************************************************/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string proibido, bracelete, bracelete2;
	int n; 
	bool esta_presente;

	cin >> n;
	while (n--)
	{
		esta_presente = false;
		cin >> proibido >> bracelete;

		// Concatenando dois braceletes
		bracelete2.clear();
		bracelete2 += bracelete;
		bracelete2 += bracelete;

		// Inverte o padrão
		string proibido_r = proibido;
		reverse(proibido_r.begin(), proibido_r.end());

		// Procuro o padrão e o padrão inverso no bracelete	
		if (bracelete2.find(proibido) != string::npos || bracelete2.find(proibido_r) != string::npos)
			esta_presente = true;

		if (esta_presente) cout << "S" << endl;
		else cout << "N" << endl;
	}
	return 0;
}

