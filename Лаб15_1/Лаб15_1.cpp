#include <iostream>
#include <clocale>
using namespace std;
void powerA3 (double A, double *B)
{
	*B = pow(A, 3);
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	for (i = 1; i <= 5; i++)
	{
		double A, B;
		cout << "Введите число А\n";
		cin >> A;
		powerA3 (A, &B);
		cout << "A в кубе равно " << B << "\n";
	}
	return 0;
}