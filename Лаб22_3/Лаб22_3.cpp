#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, i, j, A[100][100];
	cout << "Введите M и N\n";
	cin >> M >> N;
	if (M % 2 == 0 && N % 2 == 0)
	{
		for (i = 1; i <= M; i++)
		{
			for (j = 1; j <= N; j++)
			{
				cout << "(" << i << ", " << j << ") = ";
				cin >> A[i][j];
			}
		}
		cout << "\n";
		for (j = 1; j <= N / 2; j++)
		{
			for (i = 1; i <= M / 2; i++)
			{
				if (A[i][j] != A[(N / 2) + i][(M / 2) + j])
				{
					swap(A[i][j], A[(M / 2) + i][(N / 2) + j]);
				}
			}
		}
		for (i = 1; i <= M; i++)
		{
			for (j = 1; j <= N; j++)
			{
				cout << "(" << i << ", " << j << ") = " << A[i][j] << "\n";
			}
		}
	}
	else 
	{
		cout << "Введены некорректные значения";
	}
	return 0;
}