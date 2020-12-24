#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, i, j, z, A[100][100];
	cout << "Введите M и N\n";
	cin >> M >> N;
	for (i = 1; i <= M; i++)
	{
		for (j = 1; j <= N; j++)
		{
			cout << "(" << i << ", " << j << ") = ";
			cin >> A[i][j];
		}
	}
	cout << "\n";
	for (i = 1; i < M; i++)
	{
		for (z = 1; z < M; z++)
		{
			if (A[z][1] > A[z + 1][1])
			{
				for (j = 1; j <= N; j++)
				{
					swap(A[z][j], A[z + 1][j]);
				}
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
	return 0;
}