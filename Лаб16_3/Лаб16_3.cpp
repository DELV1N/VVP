#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, A, B, i, j, arr[1000];
	cout << "Введите значения N, A и B\n";
	cin >> N >> A >> B;
	if (N > 2)
	{
		arr[0] = A;
		arr[1] = B;
		arr[2] = A + B;
		for (i = 3; i <= N; i++)
		{
			arr[i] = arr[i - 1] * 2;
		}	
		for (i = 0; i < N; i++)
		{
			cout << arr[i] << " ";
		}
	}
	else
	{
		cout << "Введены некорректные значения";
	}
	return 0;
}