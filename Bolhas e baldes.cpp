#include <bits/stdc++.h>
#define MAX 100001
using namespace std;
 
long long int merge_count(int A[], int B[], int p, int q, int r)
{
	int i, j, k;
	long long int c;
 
	for(i = p; i <= q; i++)
		B[i] = A[i];
 
	for(j = q + 1; j <= r; j++)
		B[r + q + 1 - j] = A[j];
 
	i = p;
	j = r;
	c = 0;
 
	for(k = p; k <= r; k++)
	{
		if(B[i] <= B[j])
		{
			A[k] = B[i];
			i = i + 1;
		}
		else
		{
			A[k] = B[j];
			j = j - 1;
			c = c + (q - i + 1);
		}
	}
	return c;
}
 
long long int sort_count(int A[], int B[], int i, int j)
{
	int q;
	if(i >= j ) return 0;
	else
	{
		q = (i + j) / 2;
		return sort_count(A, B, i, q) +
			   sort_count(A, B, q + 1, j) +
			   merge_count(A, B, i, q, j);
	}
}
 
int main(int argc, char *argv[])
{
	int v1[MAX], v2[MAX];
	int N, i, c;
	
	while(scanf("%d", &N) && N > 0)
	{
			c = 0;
			for(i = 1; i <= N; i++)
			{
				scanf("%d", &v1[i]);
				v2[i] = v1[i];
			}
			c = sort_count(v1, v2, 1, N);
			if (c % 2 == 0) printf("Carlos\n");
			else printf("Marcelo\n");
	}
	return 0;
} 
