#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, a, A[100];
	cout << "Введите значение N\n";
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	a = A[2];
	for (i = 2; i <= N; i += 2)
	{
		if (A[i] < a)
		{
			a = A[i];
		}
	}
	cout << "Минимальный элемент = " << a;
	return 0;
}