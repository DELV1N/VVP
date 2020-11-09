#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, F = 0, a = 1, b = 1, K = 2;
	cout << "Введите число N\n";
	cin >> N;
	if (N > 1)
	{
		while (F < N)
		{
			F = a + b;
			b = a;
			a = F;
			K++;
		}
		cout << "Порядковый номер числа Фибоначчи " << K;
	}
	else
	{
		cout << "Введено некоррекнтое значение";
	}
	return 0;
}