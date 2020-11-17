#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, j, arr[100];
	cout << "Введите значение N\n";
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	for (i = 1; i < N; i++)
	{
		for (j = i + 1; j <= N; j++)
		{
			if (arr[i] == arr[j])
			{
				cout << "Номера одинаковых элементов в порядке возрастания: " << i << ", " << j;
			}
		}
	}
	return 0;
}