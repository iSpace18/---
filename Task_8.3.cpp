#include <iostream>
using namespace std;
int main() {
	system("chcp 1251");
	int sum = 0;

	int num = 0;
	cout << " ������� ��������� �����: ";
	cin >> num;

	int num2 = 0;
	cout << "������� �������� �����: ";
	cin >> num2;
	cout << "�� ���������� �� ��������� �����: \n";
	for ( num = num - 1; num < num2; num++) {
		cout << num + 1 << "\n";
		sum += num;
	};
	cout << "����� ���������� �����: " << sum << endl;
	//	cout << "�� 1 �� ��������� �����: \n";
	//for (int i = 0;i < num; i++) {
	//	cout << i + 1 << "\n";
	//	sum += i;
	//};
}