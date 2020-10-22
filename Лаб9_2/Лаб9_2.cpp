#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int K;
	cout << "Введите день года ";
	cin >> K;
	if (K>0 and K<366)
	{
		K = K % 7;
		cout << "Номер дня недели для этого дня равен " << K;
	}
	else
	{
		cout << "Введено некорректное значение";
	}
	return 0;
}