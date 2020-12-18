#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, i, j, A[100][100], mul, min, num;
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
	min = 1;
	num = 1;
	for (i = 1; i <= M; i++)
	{
		min *= A[i][1];
	}
	for (j = 2; j <= N; j++)
	{
		mul = 1;
		for (i = 1; i <= M; i++)
		{
			mul *= A[i][j];
		}
		if (mul < min)
		{
			min = mul;
			num = j;
		}
	}
	cout << "Минимальное произведение равно " << min << "\nСтолбец номер " << num;
	return 0;
}