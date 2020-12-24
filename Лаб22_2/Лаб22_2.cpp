#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, i, j, A[100][100], minI, minJ, maxI, maxJ;
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
	for (i = 1; i <= M; i++)
	{
		minI = 1;
		minJ = 1;
		maxI = 1;
		maxJ = 1;
		for (j = 2; j <= N; j++)
		{
			if (A[i][j] > A[maxI][maxJ])
			{
				maxI = i;
				maxJ = j;
			}
			if (A[i][j] < A[minI][minJ])
			{
				minI = i;
				minJ = j;
			}
		}
	}
	if (minJ != maxJ)
	{
		for (i = 1; i <= M; i++)
		{
			swap(A[i][minJ], A[i][maxJ]);
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