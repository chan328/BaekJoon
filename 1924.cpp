#include "pch.h"
#include <iostream>

int main()
{
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int x, y;
	int days = 0;
	std::cin >> x >> y; // x는 달 y는 일
	for (int i = 0; i < x-1; i++)
	{
		days += month[i];
	}
	days += y;

	if(days > 7)
		days = days % 7;

	
	switch (days)
	{
	case 0:
		std::cout << "SUN";
		break;
	case 1:
		std::cout << "MON";
		break;
	case 2:
		std::cout << "TUE";
		break;
	case 3:
		std::cout << "WED";
		break;
	case 4:
		std::cout << "THU";
		break;
	case 5:
		std::cout << "FRI";
		break;
	case 6:
		std::cout << "SAT";
		break;
	default:
		break;
	}
}