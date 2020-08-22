#include <iostream>
using namespace std;
 
int main(int argc, char *argv[])
{
	int N;
	double a, b;
	
	cin>>N;
	for(int i = 1; i <= N; i++)
	{
		cin>> a >> b;
		cout<< a + b <<endl;
	}
	return 0;
} 
