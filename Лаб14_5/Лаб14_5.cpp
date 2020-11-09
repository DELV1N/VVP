#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B;
	cout << "Введите числа А и В\n";
	cin >> A >> B;
	while (B != A)
	{
		if (A > B)
		{
			A -= B;
		}
		if (B > A)
		{
			B -= A;
		}
	}
	cout << "НОД А и В равен " << A;
	return 0;
}