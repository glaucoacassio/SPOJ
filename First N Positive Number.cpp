#include <iostream>
using namespace std;
 
int main(int argc, char *argv[])
{
	int N, a;
	
	cin>> N;
	for(int i = 0; i < N; i++)
	{
		cin>> a;
		if(a > 0)
		{
			for(int i = 1; i <= a; i++)
				cout<< i <<" ";
		} else {
			cout<<"invalid";
		}
		cout<<endl;
	}
	return 0;
} 
