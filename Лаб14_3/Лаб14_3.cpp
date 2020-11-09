#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, K, a;
	cout << "Введите число N\n";
	cin >> N;
	a = 0;
	if (N > 1)
	{
		for (K = 1; a < N; K++)
		{
			a = a + K;
		}
		K = K - 1;
		cout << "Сумма равна " << a << "\n" << "K = " << K;
	}
	else
	{
		cout << "Введено некорректное значение";
	}
	return 0;
}