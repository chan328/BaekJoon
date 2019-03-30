#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	char str[500] = {};
	cin.getline(str, 500);
	while (strcmp(str, "END") != 0)
	{
		int len = strlen(str);
		while (len--)
		{
			cout << str[len];
		}
		cout << endl;
		cin.getline(str, 500);
	}
}