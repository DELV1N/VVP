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
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
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
	Max+=2;
	N++;
	for (i = N; i > Min; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[Min] = 0;
	N++;
	for (i = N; i > Max; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[Max] = 0;
	for (i = 1; i <= N; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << "\n";
	}
	return 0;
}