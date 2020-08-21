#include <bits/stdc++.h>
#define MAX 100100
using namespace std;
 
long long int merge_sort(int A[], int B[], int p, int q, int r)
{
	int i, j, k;
	long long int c;
	
	for(i = p; i <= r; i++)
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
	if( i >= j ) return 0;
	else
	{
		q = (i + j)/2;
		return
			  sort_count(A, B, i, q) +
			  sort_count(A, B, q + 1, j) +
			  merge_sort(A, B, i, q, j);	
	}
}
 
int main(int argc, char** argv)
{
	int N, v1[MAX], v2[MAX], i;
	
	cin>>N;
	for(i = 1; i <= N; i++)
	{
		cin>>v1[i];
		v2[i] = v1[i];
	}
	cout<< sort_count(v1, v2, 1, N) <<endl;
 
	return 0;
} 
