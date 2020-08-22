#include <bits/stdc++.h> 
using namespace std;
 
class Grafo
{
	int V;
	list<int> *adj;
	
public:
	Grafo(int V);
	void InseriAresta(int v1, int v2);
	pair<int, int> bfs(int V);
	void longestPathLength();
};
 
Grafo::Grafo(int V)
{
	this->V = V;
	adj = new list<int>[V];
}
 
void Grafo::InseriAresta(int v1, int v2)
{
	adj[v1].push_back(v2);
	adj[v2].push_back(v1);
}
 
pair<int, int> Grafo::bfs(int u)
{
	int dist[V];
	memset(dist, -1, sizeof(dist));
	dist[u] = 0;
	
	queue<int> q;
	q.push(u);
	while(!q.empty())
	{
		int t = q.front();    q.pop();
		list<int>::iterator it;
		for(it = adj[t].begin(); it != adj[t].end(); it++)
		{
			int v = *it;
			
			if(dist[v] == -1)
			{
				q.push(v);
				dist[v] = dist[t] + 1;
			}
		}
	}
	
	int maxDist = 0;
	int noId;
	for(int i = 1; i < V; i++)
	{
		if(dist[i] > maxDist)
		{
			maxDist = dist[i];
			noId = i;
		}
	}
	
	return make_pair(noId, maxDist);
}
 
void Grafo::longestPathLength()
{
	pair<int, int> t1, t2;
	
	t1 = bfs(1);
	
	t2 = bfs(t1.first);
	/*
	cout<<"O mais longo caminho � do vertice "<< t1.first <<" para o vertice "
		<< t2.first <<" de comprimento "<< t2.second <<"."<< endl; 
	*/	
	cout<< t2.second <<endl;
}
 
int main(int argc, char *argv[])
{
	int V, a, b;
	
	cin>> V;
	Grafo g(V+1);
	for(int i = 1; i <= V-1; i++)
	{
		cin>> a >> b;
		g.InseriAresta(a, b);
	}
	g.longestPathLength();
	return 0;
} 
