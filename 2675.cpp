#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

void bubble_sort(int arr[], int n)
{
	int temp;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - (i + 1); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int count = 0; count < n; count++)
	{
		cout << arr[count] << " ";
	}
}

int main()
{
	int arr[1000] = {};
	int N;
	cin >> N;

	
}