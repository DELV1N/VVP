#include <iostream>
#include <clocale>
using namespace std;
int Fact2(int N)
{
	int a, b;
	if (N % 2 == 0)
	{
		a = 1;
		b = 2;
		while (N > 0)
		{
			a = a * b;
			b = b + 2;
			N = N - 2;
		}
		return a;
	}
	else
	{
		a = 1;
		b = 1;
		while (N > 0)
		{
			a = a * b;
			b = b + 2;
			N = N - 2;
		}
		return a;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "Введите число N\n";
	cin >> N;
	if (N > 0)
	{
		cout << "Факториал N = " << Fact2(N);
	}
	else
	{
		cout << "Введены некорректные значения";
	}
	return 0;
}