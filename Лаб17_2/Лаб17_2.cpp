#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, a, arr[100];
	cout << "Введите значение N\n";
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	a = arr[2] - arr[1];
	for (i = 2; i < N; i++)
	{
		if (a != arr[i] - arr[i - 1])
		{
			a = 0;
		}
	}
	cout << "Разность прогресси = " << a;
	return 0;
}