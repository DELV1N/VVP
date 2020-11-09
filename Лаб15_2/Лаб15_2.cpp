#include <iostream>
#include <clocale>
using namespace std;
int Sign(double X)
{
	if (X < 0) return -1;
	if (X == 0) return 0;
	if (X > 0) return 1;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B;
	cout << "Введите числа A и B\n";
	cin >> A >> B;
	cout << "Значение выражения равно " << Sign(A) + Sign(B);
	return 0;
}