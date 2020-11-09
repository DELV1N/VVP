#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i;
	double a, A, b;
	cout << "Введите значения A и N\n";
	cin >> A >> N;
	a = 0;
	for (i = 0; i <= N; i++)
	{
		b = pow(A, i);
		a = a + pow(-1, i) * b;
	}
	cout << "Значение выражения равно " << a;
	return 0;
}