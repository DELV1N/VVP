#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int M, i, j, A[100][100], a;
	cout << "Введите M\n";
	cin >> M;
	for (i = 1; i <= M; i++)
	{
		for (j = 1; j <= M; j++)
		{
			cout << "(" << i << ", " << j << ") = ";
			cin >> A[i][j];
		}
	}
	cout << "\n";
	for (j = 1; j < M; j++)
	{
		a = 0;
		for (i = 1; i <= j; i++)
		{
			a += A[i][M - (j - i)];
		}
		cout << "Сумма элементов диагонали (начиная от правого верхнего края) равна " << a << "\n";
	}
	for (j = M - 1; j >= 1; j--)
	{
		a = 0;
		for (i = 1; i <= j; i++)
		{
			a += A[M - (j - i)][i];
		}
		cout << "Сумма элементов диагонали (начиная от правого верхнего края) равна " << a << "\n";
	}
	return 0;
}