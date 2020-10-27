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
	if (A>99 and A<1000)
	{
		A = abs(A);
		cout << "Истинность высказывания: " << (((((A / 100) > (A % 100 / 10)) && ((A % 100 / 10) > (A % 10))) || (((A / 100) < (A % 100 / 10)) && ((A % 100 / 10) < (A % 10)))) ? "True" : "False");
	}
	else
	{
		cout << "Введено некорректное значение";
	}
	return 0;
}