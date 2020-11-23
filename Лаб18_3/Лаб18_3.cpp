#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, * arr, i, a = 0;
	cout << "Введите N\n";
	cin >> N;
	arr = new int[N];
	for (i = 1; i <= N; i++)
	{
		arr[i] = rand();
		cout << "arr[" << i << "] = " << arr[i] << "\n";
		if (arr[i] % 2 != 0)
		{
			a = arr[i];
		}
	}
	cout << "\n";
	for (i = 1; i <= N; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr[i] = arr[i] + a;
		}
		cout << "arr[" << i << "] = " << arr[i] << "\n";
	}
	return 0;
}