#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B;
	cout << "Введите значения A и B\n";
	cin >> A >> B;
	if (A > B)
	{
		while (A >= B)
		{
			A = A - B;
		}
		cout << "Длина незанятой части равна " << A;
	}
	else 
	{
		cout << "Введены некорректные значения";
	}
	return 0;
}