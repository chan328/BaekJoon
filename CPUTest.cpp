#include "pch.h"
#include <cmath>
#include <thread>
#include <vector>
using namespace std;

int main()
{
	auto boilerFunc = [] { while (true) sqrt(numeric_limits<double>::max()); };
	vector<thread> boilers;
	for (int i = 0; i < thread::hardware_concurrency(); ++i)
		boilers.emplace_back(boilerFunc);
	for (auto& b : boilers) b.join();
}