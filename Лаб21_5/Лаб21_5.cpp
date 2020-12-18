#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, i, j, A[100][100], num;
	cout << "Введите M и N\n";
	cin >> M >> N;
	for (i = 1; i <= M; i++)
	{
		cout << i << ": \n";
		for (j = 1; j <= N; j++)
		{
			cout << j << ": ";
			cin >> A[i][j];
		}
	}
	for (j = 1; j <= N; j++)
	{
		num = 0;
		for (i = 1; i <= M; i++)
		{
			if (A[i][j] % 2 == 0)
			{
				num++;
			}
		}
		if (num > 0)
		{
			cout << "Номер столбца " << j;
		}
	}
	return 0;
}