#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A,B;
	cout << "Введите значения A и B\n";
	cin >> A >> B;
	if (A == B)
	{
		A = 0;
		B = 0;
		cout << "A = " << A << " B = " << B;
	}
	else if (A > B)
	{
		B = A;
		cout << "A = " << A << " B = " << B;
	}
	else if (A < B)
	{
		A = B;
		cout << "A = " << A << " B = " << B;
	}
	return 0;
}