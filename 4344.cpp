#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double test_case = 0; // �׽�Ʈ���̽�
	double stu_num = 0; // �л����� ��
	double average[1000]; // ��հ� ����
	double winner = 0; // ��� ����ģ��
	double sum = 0;	// ������ ��
	double score[1000]; // �л����� ����

	cout << fixed;
	cout.precision(3);
	
	cin >> test_case; // �׽�Ʈ���̽� �Է¹���
	
	for (int i = 0; i < test_case; i++) // �׽�Ʈ���̽���ŭ �ݺ�
	{
		cin >> stu_num; // �л��� �Է¹���
		for (int j = 0; j < stu_num; j++) // �л����� ������ �޾ƾ���.
		{
			cin >> score[j]; // i��° test_case�� j��° �л��� ������ �Է¹���.
			sum += score[j];
		}
		sum = sum / stu_num; // ��հ� ����.
		for (int j = 0; j < stu_num; j++)
		{
			if (score[j] > sum)
			{
				winner++; // ��պ��� ������ winner�� 1�� ������
			}
		}
		
		cout << winner / stu_num * 100 << "%" << endl; // ����ģ�� / ��ü �л����� ��ճ��� �л����� ���.
		sum = 0;
		winner = 0;
	}
	return 0;
}