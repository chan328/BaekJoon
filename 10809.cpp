#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[26] = { -1 };
	string Input;

	cin >> Input;

	arr[0] = Input.find("a");
	arr[1] = Input.find("b");
	arr[2] = Input.find("c");
	arr[3] = Input.find("d");
	arr[4] = Input.find("e");
	arr[5] = Input.find("f");
	arr[6] = Input.find("g");
	arr[7] = Input.find("h");
	arr[8] = Input.find("i");
	arr[9] = Input.find("j");
	arr[10] = Input.find("k");
	arr[11] = Input.find("l");
	arr[12] = Input.find("m");
	arr[13] = Input.find("n");
	arr[14] = Input.find("o");
	arr[15] = Input.find("p");
	arr[16] = Input.find("q");
	arr[17] = Input.find("r");
	arr[18] = Input.find("s");
	arr[19] = Input.find("t");
	arr[20] = Input.find("u");
	arr[21] = Input.find("v");
	arr[22] = Input.find("w");
	arr[23] = Input.find("x");
	arr[24] = Input.find("y");
	arr[25] = Input.find("z");

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}
}