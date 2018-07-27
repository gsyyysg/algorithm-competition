#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
	int a[26] = { 0 };
	double sum = 0;
	string str;
	cin >> str;
	for (int i = 0;i < str.size();i++)
	{
		if (str[i] == 'H' || str[i] == 'C' || str[i] == 'O' || str[i] == 'N')
		{
			if (isdigit(str[i + 1])) a[str[i] - 'A'] += str[i + 1] - '0', i++;
			else a[str[i] - 'A']++;
	     }
	}
	sum = a[2] * 12.01 + a[13] * 14.01 + a[14] * 16.00 + a[7] * 1.008;
	cout << sum << endl;
	return 0;
}
