#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#define INF 1000000000
using namespace std;
 
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
 
int main(int argc, char *argvs[])
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n, m, a, b, s, instancia = 1;
    vector<vii> adjList;
 
    while (scanf("%d %d", &n, &m) != EOF)
    {
        adjList.assign(n+1, vii());
        for (int i=0; i<m; i++)
        {
            scanf("%d %d", &a, &b);
            adjList[a].push_back(ii(b, 0));
            adjList[b].push_back(ii(a, 0));
        }
 
        int s = 1;
 
        queue<int> q;  q.push(s);
        vi color(n+1, INF); color[s] = 0;
        bool esBipartido = true;
        while (!q.empty() && esBipartido)
        {
            int u = q.front(); q.pop();
            for (int j = 0; j < (int) adjList[u].size(); j++)
            {
                ii v = adjList[u][j];
                if (color[v.first] == INF)
                {
                    color[v.first] = 1 - color[u];
                    q.push(v.first);
                } 
                else if (color[v.first] == color[u])
                {
                    esBipartido = false;
                    break;
                }
            }
        }
        printf(
            esBipartido ? "Instancia %d\nsim\n\n" : 
                          "Instancia %d\nnao\n\n", instancia++
                        );
    }
    return 0;
} 
