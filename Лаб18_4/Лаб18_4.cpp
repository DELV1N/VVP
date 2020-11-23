#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, * arr, i, min, max, Min, Max;
	cout << "Введите N\n";
	cin >> N;
	arr = new int[N];
	for (i = 1; i <= N; i++)
	{
		arr[i] = rand();
		cout << "arr[" << i << "] = " << arr[i] << "\n";
	}
	cout << "\n";
	Min = 1;
	Max = 1;
	min = arr[1];
	max = arr[1];
	for (i = 1; i <= N; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			Max = i;
		}
		else if (arr[i] < min)
		{
			min = arr[i];
			Min = i;
		}
	}
	for (i = 1; i <= N; i++)
	{
		if ((i > Min and i < Max) or (i<Min and i>Max))
		{
			arr[i] = 0;
		}
		cout << "a[" << i << "] = " << arr[i] << "\n";
	}
	return 0;
}