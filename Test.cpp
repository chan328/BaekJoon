#include "pch.h"
#include<iostream>
#include<cmath>
using namespace std;

// input : x1, y1, r1, x2, y2, r2
//          0,  1,  2,  3,  4,  5

double Dist(double x1, double y1, double x2, double y2)
{
	double distance;

	// 피타고라스의 정리
	distance = sqrt(pow(x1 - x2, 2) + pow(y2 - y1, 2));

	return distance;
}

int main()
{
	int T; // 테스트 케이스
	int result; // 결과
	double arr[100][100];
	cout << "asdf";
}