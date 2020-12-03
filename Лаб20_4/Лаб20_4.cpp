#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, j, b;
	double A[100][2], a, max;
	cout << "Введите N\n";
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		cout << "A[" << i << "]:" << "\nx = ";
		cin >> A[i][0];
		cout << "y = ";
		cin >> A[i][1];
	}
	cout << "\n";
	max = 0;
	b = 0;
	for (i = 1; i <= N; i++)
	{
		if (A[i][0] < 0 && A[i][1] > 0)
		{
			a = sqrt(pow(A[i][0], 2) + pow(A[i][1], 2));
			b++;
			if (a > max)
			{
				max = a;
				j = i;
			}
		}
	}
	if (b > 0)
	{
		cout << "A (" << A[j][0] << "; " << A[j][1] << ")";
	}
	else
	{
		cout << "A (0; 0)";
	}
	return 0;
}