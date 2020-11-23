#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, j, i, *A;
	double  a, *B;
	cout << "Введите N\n";
	cin >> N;
	A = new int[N];
	B = new double[N];
	for (i = 1; i <= N; i++)
	{
		A[i] = rand();
		cout << "A[" << i << "] = " << A[i] << "\n";
	}
	cout << "\n";
	for (i = 1; i <= N; i++)
	{
		a = 0;
		for (j = 1; j <= i; j++)
		{
			a += A[j];
		}
		B[i] = a/i;
		cout << "B[" << i << "] = " << B[i] << "\n";
	}
	return 0;
}