#include <iostream>
using namespace std;
int main() {
	system("chcp 1251");
	int sum = 0;

	int num = 0;
	cout << " ¬ведите начальное число: ";
	cin >> num;

	int num2 = 0;
	cout << "¬ведите конечное число: ";
	cin >> num2;
	cout << "ќт начального до конечного числа: \n";
	for ( num = num - 1; num < num2; num++) {
		cout << num + 1 << "\n";
		sum += num;
	};
	cout << "—умма выведенных чисел: " << sum << endl;
	//	cout << "ќт 1 до конечного числа: \n";
	//for (int i = 0;i < num; i++) {
	//	cout << i + 1 << "\n";
	//	sum += i;
	//};
}