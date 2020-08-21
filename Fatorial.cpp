#include <iostream>
using namespace std;
 
int main(int argc, char *argv[])
{
	int N, fat;
	cin >> N;
	fat = 1;
	for(int i = N; i > 1 ; i--)
		fat = fat*i;
	cout<< fat <<endl;
	
	return 0;
} 
