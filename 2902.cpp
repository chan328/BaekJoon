#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		if (i == 0)
		{
			cout << str[i];
		}
		if (str[i] == '-')
		{
			cout << str[i + 1];
		}
	}
}