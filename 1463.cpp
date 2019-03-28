#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int N;
	int count = 0;
	cin >> N;
	while (N != 1)
	{
		if (N == 2 || (N - 1) % 3 == 0)
		{
			N -= 1;
			count++;
			continue;
		}
		else if (N % 3 == 0)
		{
			N = N / 3;
			count++;
			continue;
		}
		else if (N % 2 == 0)
		{
			N = N / 2;
			count++;
			continue;
		}
		else
		{
			N -= 1;
			count++;
			continue;
		}
	}
	cout << count;

	return 0;
}