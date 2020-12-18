#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, K, i, j, A[100][100], sum, mul;
	cout << "Введите M, N и K\n";
	cin >> M >> N >> K;
	if (1 <= K && K <= M)
	{
		for (i = 1; i <= M; i++)
		{
			cout << i << ": \n";
			for (j = 1; j <= N; j++)
			{
				cout << j << ": ";
				cin >> A[i][j];
			}
		}
		sum = 0;
		mul = 1;
		for (j = 1; j <= N; j++)
		{
			sum += A[K][j];
			mul *= A[K][j];
		}
		cout << "Сумма равна " << sum << "\nПроизведение равно " << mul;
	}
	else
	{
		cout << "Введены некорректные значения";
	}
	return 0;
}