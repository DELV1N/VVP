#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, A[1000];
	cout << "Введите N\n";
	cin >> N;
	for (i = 0; i < N; i++)
	{
		A[i] = rand();
	}
	for (i = 0; i < N; i++)
	{
		cout << A[i] << " ";
		cout << A[N - i - 1] << " ";
	}
	return 0; 
}