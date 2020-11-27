#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, * arr, i, a;
	cout << "Введите N\n";
	cin >> N;
	arr = new int[N];
	for (i = 1; i <= N; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	a = 1;
	cout << "\n";
	for (i = 2; i <= N; i++)
	{
		if (arr[a] != arr[i])
		{
			a++;
			arr[a] = arr[i];		
		}
	}
	for (i = 1; i <= a; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << "\n";
	}
	return 0;
}