#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, A[1000];
	cout << "Введите N\n";
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		A[i] = rand();
		cout << "Элеменет массива " << i << " " << A[i] << "\n";
	}
	for (i = 1; i <= N; i += 2)
	{
		cout << A[i] << " ";
	}
	for (i = N-N%2; i>0 ; i -= 2)
	{
		cout << A[i] << " ";
	}
	return 0;
}