#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, a = 0, arr[100];
	cout << "Введите значение N\n";
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	if (arr[1] > arr[2])
	{
		a = 1;
	}
	for (i = 2; i < N; i++)
	{
		if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1])
		{
			a = i;
		}
	} 
	if (arr[N] > arr[N - 1])
	{
		a = N;
	}
	cout << "Номер последнего локального максимума = " << a;
	return 0;
}