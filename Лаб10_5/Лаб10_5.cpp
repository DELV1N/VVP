#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A;
	cout << "Введите значения А\n";
	cin >> A;
	A = abs(A);
	if (A < 10000 and A>999)
	{
		cout << "Истинность высказывания: " << (((A / 1000) == (A % 10)) && ((A / 100 % 10) == (A % 100 / 10)) ? "True" : "False");
	}
	else
	{
		cout << "Введено некорректное значение";
	}
	return 0;
}