
using namespace std;
#include <iostream>

int main() // ù° �ٿ� �� �� E, S, M�� �־�����. ������ �����ִ� ������ ��Ű�� �Է¸� �־�����.
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