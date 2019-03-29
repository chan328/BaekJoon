#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double test_case = 0; // 테스트케이스
	double stu_num = 0; // 학생들의 수
	double average[1000]; // 평균값 저장
	double winner = 0; // 평균 넘은친구
	double sum = 0;	// 점수의 합
	double score[1000]; // 학생들의 점수

	cout << fixed;
	cout.precision(3);
	
	cin >> test_case; // 테스트케이스 입력받음
	
	for (int i = 0; i < test_case; i++) // 테스트케이스만큼 반복
	{
		cin >> stu_num; // 학생수 입력받음
		for (int j = 0; j < stu_num; j++) // 학생들의 점수를 받아야함.
		{
			cin >> score[j]; // i번째 test_case의 j번째 학생의 점수를 입력받음.
			sum += score[j];
		}
		sum = sum / stu_num; // 평균값 구함.
		for (int j = 0; j < stu_num; j++)
		{
			if (score[j] > sum)
			{
				winner++; // 평균보다 높으면 winner에 1을 더해줌
			}
		}
		
		cout << winner / stu_num * 100 << "%" << endl; // 높은친구 / 전체 학생수로 평균넘은 학생들을 계산.
		sum = 0;
		winner = 0;
	}
	return 0;
}