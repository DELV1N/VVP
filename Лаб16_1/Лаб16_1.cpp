#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int arr[1000], N, i;
	cout << "Введите число N\n";
	cin >> N;
	if (N > 0)
	{
		for (i = 0; i < N; i++)
		{
			arr[i] = 1 + i * 2;
			cout << arr[i] << " ";
		}
	}
	else
	{
		cout << "Введено некорректное значение";
	}
	return 0;
}