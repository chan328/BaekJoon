#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int r;
		string test_case;
		cin >> r;
		cin >> test_case;

		for (int j = 0; j < test_case.length(); j++)
		{
			for (int k = 0; k < r; k++)
			{
				cout << test_case[j];
			}
		}
		cout << endl;
	}
	return 0;
}
