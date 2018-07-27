#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cctype>

using namespace std;

const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

char r(char a)
{
	if (isalpha(a)) return rev[a - 'A'];
	return rev[a - '0' + 25];
}


int main()
{
	string str;
	vector<string> msg;
	msg.push_back ("not a palindrome") ; 
	msg.push_back ( "a regular palindrome");
	msg.push_back("a mirrored string") ;
	msg.push_back( "a mirrored palindrome");
	cin >> str;
	int p = 1, m = 1;
	for (int i = 0;i < str.size() / 2;i++)
	{
		if (str[i] != str[str.size() - 1 - i]) p = 0;
		if (r(str[i]) != str[str.size() - 1 - i]) m = 0;
	}
	cout << str << " -- is " << msg[m * 2 + p] << endl;
	system("pause");
	return 0;
}