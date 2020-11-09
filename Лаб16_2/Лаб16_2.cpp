#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, A, D, arr[1000], i, a;
	cout << "Введите значения N, A и D\n";
	cin >> N >> A >> D;
	if (N > 1)
	{
		a = 1;
		for (i = 0; i < N; i++)
		{
			arr[i] = A * a;
			a = a * D;
			cout << arr[i] << " ";
		}
	}
	else
	{
		cout << "Введены некорректные значения";
	}
	return 0;
}