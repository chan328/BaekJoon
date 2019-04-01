#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count = 0;
	string str;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		switch (str[i])
		{
		case 'c':
			if (str[i + 1] == '=' || str[i + 1] == '-')
				count++;
			else
			{
				count++;
				break;
			}
			i += 1;
			break;
		case 'd':
			if (str[i + 1] == 'z' && str[i + 2] == '=')
			{
				count++;
				i += 2;
			}
			else if (str[i + 1] == '-')
			{
				count++;
				i += 1;
			}
			else
			{
				count++;
				break;
			}
			break;
		case 'l':
			if (str[i + 1] == 'j')
			{
				count++;
				i += 1;
			}
			else
			{
				count++;
				break;
			}
			break;
		case 'n':
			if (str[i + 1] == 'j')
			{
				count++;
				i += 1;
			}
			else
			{
				count++;
				break;
			}
			break;
		case 's':
			if (str[i + 1] == '=')
			{
				count++;
				i += 1;
			}
			else
			{
				count++;
				break;
			}
			break;
		case 'z':
			if (str[i + 1] == '=')
			{
				count++;
				i += 1;
			}
			else
			{
				count++;
				break;
			}
			break;
		default:
			count++;
			break;
		}
	}

	cout << count;
}