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
using namespace std;

bool sorted_word(string& word)
{
    if (word.length() > 1)
    {
        for (int j = 0; j < word.length() - 1; j++)
        if (tolower(word[j]) > tolower(word[j + 1]) || tolower(word[j]) == tolower(word[j + 1]))
            return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	int n;
    string word;

    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, word);
        if(sorted_word(word)) cout << word <<": O" << endl;
        else cout << word << ": N" << endl;
    }
	return 0;
}
