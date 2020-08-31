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
using namespace std;


bool estaBalanceada(string expr) 
{ 
	stack<char> s; 
	char x; 

	// atravesso a expressao 
	for (int i = 0; i < expr.length(); i++) { 
		if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') { 
			// dou um push na pilha 
			s.push(expr[i]); 
			continue; 
		} 

		if (s.empty()) 
			return false; 

		switch (expr[i]) { 
		case ')': 

			x = s.top(); 
			s.pop(); 
			if (x == '{' || x == '[') 
				return false; 
			break; 

		case '}': 

			x = s.top(); 
			s.pop(); 
			if (x == '(' || x == '[') 
				return false; 
			break; 

		case ']': 

			x = s.top(); 
			s.pop(); 
			if (x == '(' || x == '{') 
				return false; 
			break; 
		} 
	} 

	// Checo se a pilha ta vazia
    // se terminou vazia é porque a expressao ta balanceada
	return (s.empty()); 
} 

int main() 
{ 
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
	string expr; 
    int n;

    scanf("%d",&n);
    getchar();
    while(n--)
    {
        getline(cin, expr);
	    if (estaBalanceada(expr)) cout << "S" << endl; 
	    else cout << "N" << endl;
    } 
	return 0; 
}
