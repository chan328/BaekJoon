
using namespace std;
#include <iostream>

int main() // 첫째 줄에 세 수 E, S, M이 주어진다. 문제에 나와있는 범위를 지키는 입력만 주어진다.
{
	int E, S, M;
	int e = 0, s = 0, m = 0;
	int year = 1;
	cin >> E >> S >> M;
	while (1)
	{
		if ((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 == 0)
		{
			cout << year;
			break;
		}
		year++;
	}
}