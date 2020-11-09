#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, i, j;
	cout << "Введите числа A и B\n";
	cin >> A >> B;
	if (A < B)
	{
		for (i = A; i <= B; i++)
		{
			for (j = 1; j <= i; j++)
			{
				cout << i;
			}
		}
	}
	else
	{
		cout << "Введны некорректные значения";
	}
	return 0;
}