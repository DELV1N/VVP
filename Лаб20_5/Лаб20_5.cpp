#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, j, z, a, b, c;
	double A[100][2], p, max;
	cout << "Введите N\n";
	cin >> N;
	if (N > 2)
	{
		for (i = 1; i <= N; i++)
		{
			cout << "A[" << i << "]:" << "\nx = ";
			cin >> A[i][0];
			cout << "y = ";
			cin >> A[i][1];
		}
		cout << "\n";
		max = 0;
		for (i = 1; i <= N; i++)
		{
			for (j = i + 1; j <= N; j++)
			{
				for (z = j + 1; z <= N; z++)
				{
					p = 0;
					p += sqrt(pow(A[i][0] - A[j][0], 2) + pow(A[i][1] - A[j][1], 2));
					p += sqrt(pow(A[i][0] - A[z][0], 2) + pow(A[i][1] - A[z][1], 2));
					p += sqrt(pow(A[j][0] - A[z][0], 2) + pow(A[j][1] - A[z][1], 2));
					if (p > max)
					{
						max = p;
						a = i;
						b = j;
						c = z;
					}
				}
			}
		}
		cout << "Наибольший периметр равен " << max << "\n"
			 << "A (" << A[a][0] << "; " << A[a][1] << ")\n"
			 << "B (" << A[b][0] << "; " << A[b][1] << ")\n"
			 << "C (" << A[c][0] << "; " << A[c][1] << ")\n";
	}
	else
	{
		cout << "Введено некорректное значение";
	}
	return 0;
}