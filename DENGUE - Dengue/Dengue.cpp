#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <map>
#include <climits>
#include <set>
#include <string>
#include <cstring>
#include <cstdio>
#include <stack>
#include <string.h>
#include <queue>
#include <iomanip>
#include <math.h>
#include <utility>
#include <sstream>
#include <cstdlib>
#include <fstream>
#define INF 1000000000
#define MAX 102
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int n, ans, cont, dist[MAX], dist_max = INT_MIN;
vi AdjList[MAX];

void dfs(int u)
{
	for (int j=0; j < AdjList[u].size(); j++)
	{
		int v = AdjList[u][j];
		if (dist[v] != -1) continue;//se ja visitei esse vertice sigo pro proximo
		dist[v] = dist[u] + 1;
		dfs(v);
	}
	if (dist[u] > dist_max) dist_max = dist[u];
}

int main(int argc, char **argv)
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif

	while (scanf("%d", &n), n)
	{
		//li e recebi minha matriz
		for (int i = 0; i < n - 1; i++)
		{
			int a, b;
			scanf("%d %d", &a, &b);
			AdjList[a].push_back(b); 
			AdjList[b].push_back(a);
		}

		int dist_min = INT_MAX;
		for (int i = 1; i <= n; i++)
		{
			dist_max = INT_MIN;
			for (int j = 1; j <= n; j++)
				dist[j] = -1;//Como queremos a distancia nao precisamos saber se visitamos um vertice marcamos
				//todas as distancias como -1 e so vemos se ja passou nessa distancia
			dist[i] = 0; //a distancia pra mim mesmo é 0
			dfs(i);		 //faco a busca nesse vertice
			if (dist_max < dist_min)
			{
      //se é a menor distancia entao achei meu vertice(os vertices sao de 1...n)
				ans = i;
				dist_min = dist_max;
			}
		}
		printf("Teste %d\n%d\n\n", ++cont, ans);
    //depois limpo todo o meu vetor...passo necessario senao ele vai achar que todos vertices pertencem a um grafo so!
		for (int i = 1; i <= n; i++)
			AdjList[i].clear();
	}
	return 0;
}
