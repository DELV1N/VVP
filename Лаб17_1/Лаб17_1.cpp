#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, K, L, i, b, arr[100];
	double a = 0;
	cout << "Введите значения N, K и L\n";
	cin >> N >> K >> L;
	if (1 <= K and K <= L and L <= N)
	{
		for (i = 1; i <= N; i++)
		{
			arr[i] = rand();
			cout << "arr [" << i << "] = " << arr[i] << "\n";
		}
		for (i = K; i <= L; i++)
		{
			a = a + arr[i];
		}
		b = L - K + 1;
		a = a / b;
		cout << "Среднее арифметичкское элементов от К до L равно " << a;;
	}
	else
	{
		cout << "Введены некорректные значения";
	}
	return 0;
}