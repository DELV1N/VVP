#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, * arr, i;
	cout << "Введите N\n";
	cin >> N;
	arr = new int[N];
	for (i = 1; i <= N; i++)
	{
		cin >> arr[i];
		cout << "arr[" << i << "] = " << arr[i] << "\n";
	}
	cout << "\n";
	for (i = 1; i <= N; i++)
	{
		if (arr[i] > arr[i + 1] and arr[i] < arr[i + 2])
		{
			swap(arr[i], arr[i + 1]);
		}
		cout << "arr[" << i << "] = " << arr[i] << "\n";
	}
	return 0;
}