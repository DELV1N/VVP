#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, * arr, i, j;
	cout << "Введите N\n";
	cin >> N;
	arr = new int[N];
	for (i = 1; i <= N; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	cout << "\n";
	for (i = N; i >= 1; i--)
	{
		if (arr[i] > 0)
		{
			N++;
			for (j = N; j > i; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[i + 1] = 0;
		}
	}
	for (i = 1; i <= N; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << "\n";
	}
	return 0;
}