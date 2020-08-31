#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <map>
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
#include <climits>
#include <clocale>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) (a) * (a)
//compara se numero flutuantes sao iguais if(abs(a-b) < 1e-9)   a e b sao iguais...
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long int ll;
 
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
	setlocale(LC_ALL, "Portuguese");
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, soma, tc = 1;
 
    while(scanf("%d",&n), n)
    {
        vector<int> v(n);
        soma = 0;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &v[i]);
            soma += v[i];
        }
        printf("Teste %d\n%d\n\n", tc++, soma);
    }    
    return 0;
} 
