#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, i, j, A[100][100], min, max;
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
		max = 1;
		min = 1;
		for (j = 2; j <= N; j++)
		{
			if (A[i][j] > A[i][max])
			{
				max = j;
			}
			if (A[i][j] < A[i][min])
			{
				min = j;
			}
		}
		if (A[i][max] != A[i][min])
		{
			swap(A[i][max], A[i][min]);
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