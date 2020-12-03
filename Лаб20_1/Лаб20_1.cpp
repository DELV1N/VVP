#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, * A, B[100], C[100], i, a;
	cout << "Введите N\n";
	cin >> N;
	A = new int[N];
	for (i = 1; i <= N; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	cout << "\n";
	a = 1;
	B[a] = 1;
	C[a] = A[a];
	for (i = 2; i <= N; i++)
	{
		if (A[i - 1] == A[i])
		{
			B[a]++;
		}
		else 
		{
			a++;
			B[a] = 1;
			C[a] = A[i];
		}
	}
	for (i = 1; i <= a; i++)
	{
		cout << "B[" << i << "] = " << B[i] << ", C[" << i << "] = " << C[i] << "\n";
	}
	return 0;
}