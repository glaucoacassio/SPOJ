#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
 
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
 
int main()
{
    int V, E, orig, dest, a, b, c, t;
    vector<vii> AdjList;
 
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &V, &E);
 
        AdjList.assign(V+1, vii()); 
        for (int i = 0; i < E; i++)
        {
            scanf("%d %d %d", &a, &b, &c);
            AdjList[a].push_back(ii(b, c)); 
        }
        scanf("%d %d",&orig, &dest);
 
        vi dist(V+1, INF);
        dist[orig] = 0; 
 
        priority_queue<ii, vector<ii>, greater<ii> > pq;
        pq.push(ii(0, orig));
        while (!pq.empty())
        {
            ii front = pq.top();
            pq.pop(); 
            int d = front.first, u = front.second;
            if (d == dist[u]) 
                for (int j = 0; j < (int)AdjList[u].size(); j++)
                {
                    ii v = AdjList[u][j];
                    if (dist[v.first] > (dist[u] + v.second))
                    {
                        dist[v.first] = dist[u] + v.second; 
                        pq.push(ii(dist[v.first], v.first));
                    }
                }
        } 
        if(dist[dest] == INF) printf("NO\n");
        else printf("%d\n", dist[dest]);
    }
    return 0;
} 
