#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int p = 0,sum=0;
	for (int i = 0;i < str.size();i++)
	{
		if (str[i] == 'O')
		{
			p++;
			sum += p;
		}
		else p = 0;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}