/*
Problema - Pontos
http://br.spoj.com/problems/PARPROX/
Glauco Acassio
*/
#include <bits/stdc++.h>
#define INFINITO 29999999
using namespace std;
 
int main ()
{
	vector<pair<int, int> > v;
	pair<int, int> p;
	int n, x, y;
	double dist, d;
 
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		v.push_back (make_pair (x, y));
	}
 
	dist = INFINITO;
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = i+1; j < v.size(); j++)
		{
				d = sqrt(pow((v[i].first - v[j].first), 2) + pow((v[i].second - v[j].second), 2));
				if (dist > d) dist = d;
		}
	}
	cout<< fixed << setprecision(3) << dist <<endl;
 
	return 0;
} 
