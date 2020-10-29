#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите число а\n";
	cin >> a;
	if (a == 0)
	{
		cout << "Нулевое ";
	}
	else if (a > 0)
	{
		cout << "Положительное ";
	}
	else 
	{
		cout << "Отрицательное ";
	}
	if (a % 2 == 0)
	{
		cout << "чётное ";
	}
	else
	{
		cout << "нечётное";
	}
	cout << "число";
	return 0;
}