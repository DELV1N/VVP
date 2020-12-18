#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A[100][100], M, i, j, z;
	cout << "Введите M\n";
	cin >> M;
	if (M % 2 != 0)
	{
		for (i = 0; i < M; i++)
		{
			cout << i + 1 << ": \n";
			for (j = 0; j < M; j++)
			{
				cout << j + 1 << ": ";
				cin >> A[i][j];
			}
		}
		for (z = 0; z < M / 2; z++)
		{
			for (j = z; j < M - z; j++)
			{
				cout << A[j][z] << " ";
			}
			for (i = z + 1; i <= M - z - 1; i++)
			{
				cout << A[M - z - 1][i] << " ";
			}
			for (j = M - z - 2; j >= z; --j)
			{
				cout << A[j][M - z - 1] << " ";
			}
			for (i = M - z - 2; i >= z + 1; --i)
			{
				cout << A[z][i] << " ";
			}
		}
		cout << A[M / 2][M / 2] << "\n";
	}
	else
	{
		cout << "Введено некорректное значение";
	}
	return 0;
}