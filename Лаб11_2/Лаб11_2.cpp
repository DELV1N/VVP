#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B, C;
	cout << "Введите значения A,B и C\n";
	cin >> A >> B >> C;
	if (A > C and B > C)
	{
		C = A + B;
		cout <<"Сумма двух наибольших чисел равна "<< C;
	}
	else if (B > A and C > A)
	{
		A = B + C;
		cout << "Сумма двух наибольших чисел равна " << A;
	}
	else if (C > B and A > B)
	{
		B = C + A;
		cout << "Сумма двух наибольших чисел равна " << B;
	}
	return 0;
}