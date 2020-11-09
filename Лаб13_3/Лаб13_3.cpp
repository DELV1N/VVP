#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, a;
	cout << "Введите число N\n";
	cin >> N;
	a = 0;
	for (i = 1; a < N * N; i++)
	{
	   a = (2 * i - 1) + a;
	   cout << "Текущее значение суммы равно " << a << "\n";
    }
	cout << "Квадрат числа N равен " << a;
	return 0;
}