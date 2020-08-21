#include <iostream>
#include <list>
#include <queue>
#include <cstdio>
#define INFINITO 10000000
using namespace std;
 
class Grafo
{
private:
	   int V;
	   list<pair<int, int> > *adj;
public:
	Grafo(int V);
	void InseriAresta(int v1, int v2, int custo);
	int dijkstra(int orig, int dest);
};
 
Grafo::Grafo(int V)
{
	this->V = V;
	adj = new list<pair<int, int> >[V];
}
 
void Grafo::InseriAresta(int v1, int v2, int custo)
{
	adj[v1].push_back(make_pair(v2, custo));
}
 
int Grafo::dijkstra(int orig, int dest)
{
	int dist[V];
	bool visitados[V];
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
	
	for(int i = 1; i <= V; i++)
	{
		dist[i] = INFINITO;
		visitados[i] = false;
	}
	
	dist[orig] = 0;
	pq.push(make_pair(dist[orig], orig));
	
	while(!pq.empty())
	{
		pair<int, int> p = pq.top();
		int u = p.second;
		pq.pop();
		if(visitados[u] == false)
		{
			list<pair<int, int> >::iterator it;
			for(it = adj[u].begin(); it != adj[u].end(); it++)
			{
				int v = it->first;
				int custo_aresta = it->second;
				if(dist[v] > (dist[u] + custo_aresta))
				{
					dist[v] = dist[u] + custo_aresta;
					pq.push(make_pair(dist[v], v));
				}
			}
		}
	}
	return dist[dest];
}
 
int main(int argc, char** argv)
{
	int a, b, c, orig, dest, N, M;
	
	while(scanf("%d %d", &N, &M))
	{
		if(N == 0 && M == 0) 
			break;
		//Construo o grafo
		Grafo g(N+1);
		for(int i = 1; i <= M; i++)
		{
			scanf("%d %d %d",&a, &b, &c);
			g.InseriAresta(a, b, c);
		}
		cin>> orig >> dest;
		if(g.dijkstra(orig, dest) < INFINITO) cout<< g.dijkstra(orig, dest) <<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
} 
