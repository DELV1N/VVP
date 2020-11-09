#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i;
	double A, a;
	cout << "Введите значения A и N \n";
	cin >> A >> N;
	a = 1;
	for (i = 1; i <= N; i++)
	{
		a = a + pow(A, i);
	}
	cout << "Сумма равна " << a;
	return 0;
}