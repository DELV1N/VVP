#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double i,N;
	double a = 1.1;
	cout << "Введите значение N\n";
	cin >> N;
	N = N * 0.1 + 1;
	for (i = 1.2; i <= N; i += 0.1)
	{
		a = a * i;
	}
	cout << "Произведение равно " << a;
	return 0;
}