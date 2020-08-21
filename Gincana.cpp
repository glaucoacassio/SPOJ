#include <bits/stdc++.h>
#define DFS_BLACK 1
#define DFS_WHITE 0
#define MAX 1005
using namespace std;
 
int N, M, a, b, end_search, dfs_num[MAX], adj[MAX][MAX];
 
void dfs(int u)
{
	dfs_num[u] = DFS_BLACK;
	for(int i = 1; i <= N ; i++)
	{
		if(dfs_num[i] == DFS_WHITE && adj[u][i])//se nao visitou e ainda tem vertice...
			dfs(i);
	}
}
 
int main(int argc, char *argv[])
{
	cin>> N >> M;
	memset(adj, 0, sizeof adj);
	memset(dfs_num, 0, sizeof dfs_num);
	for(int i = 0; i < M; i++)
	{
		cin >> a >> b;
		adj[a][b] = adj[b][a] = DFS_BLACK;
	}
	
	end_search = 0;
	for(int j = 1; j <= N ; j++)
	{
		if(dfs_num[j] == DFS_WHITE)
		{
			end_search++;
			dfs(j);
		}
	}
	cout<< end_search <<endl;
	
	return 0;
} 
