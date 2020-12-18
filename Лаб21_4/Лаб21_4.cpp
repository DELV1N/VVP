#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, i, j, num;
    double A[100][100], ave, sum;
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
	num = 0;
	for (j = 1; j <= N; j++)
	{
		sum = 0;
		for (i = 1; i <= M; i++)
		{
			sum += A[i][j];
			ave = sum / N;
		}
		for (i = 1; i <= M; i++)
		{
			if (A[i][j] > ave)
			{
				num++;
			}
		}
	}
	cout << "Количество элементов больших среднего арифметического " << num;
	return 0;
}