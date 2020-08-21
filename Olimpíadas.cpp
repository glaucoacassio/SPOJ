#include <bits/stdc++.h>
 
struct Pais {
    int id;
    int medalhas;
 
    friend bool operator <(const Pais& a, const Pais& b);
};
 
/**
 * Ordena elementos do vetor no intervalo [esq, dir]
 */
template<typename Tipo> void quickSort(Tipo* vetor, int esq, int dir)
{
    int i = esq;
    int j = dir;
    Tipo pivo = vetor[esq + (dir-esq)/2];
 
    while (i < j)
    {
        while (vetor[i] < pivo) i++;
        while (pivo < vetor[j]) j--;
 
        if (i <= j)
        {
            Tipo tmp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = tmp;
            i++;
            j--;
        }
    }
 
    if (j > esq) quickSort(vetor, esq, j);
    if (i < dir) quickSort(vetor, i, dir);
}
 
 
bool operator <(const Pais &a, const Pais &b)
{
    if(a.medalhas > b.medalhas) return true;
    else if(a.medalhas < b.medalhas) return false;
    else if(a.medalhas == b.medalhas) return a.id < b.id;
}
 
Pais paises[101];
 
int main(int argc, char *argvs[])
{
    int n, m, o, p, b;
    
    scanf("%d %d", &n, &m);    
    for (int i = 1; i <= n; i++) 
	{
        paises[i].id = i;
        paises[i].medalhas = 0;
    }
    
    for (int i = 1; i <= m; i++) 
	{
        // Note que a entrada Ã© a classificaÃ§Ã£o de uma prova
        scanf("%d %d %d", &o, &p, &b);
        paises[o].medalhas++;
        paises[p].medalhas++;
        paises[b].medalhas++;
    }
 
    quickSort(paises, 1, n);
    for (int i = 1; i <= n; i++)
        printf("%d ", paises[i].id);
    
    return 0;
} 
