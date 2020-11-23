#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, A[100], B[100], i;
	cout << "Введите N\n";
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		A[i] = rand();
		B[i] = rand();
		cout << "A[" << i << "] = " << A[i] << ", B[" << i << "] = " << B[i] << "\n";
	}
	cout << "\n";
	for (i = 1; i <= N; i++)
	{
		swap(A[i],B[i]);
		cout << "A[" << i << "] = " << A[i] << ", B[" << i << "] = " << B[i] << "\n";
	}
	return 0;
}