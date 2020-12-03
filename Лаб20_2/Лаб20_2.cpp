#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, L, * arr, b[100], i, j, z, n, a;
	cout << "Введите N и L\n";
	cin >> N >> L;
	arr = new int[N];
	for (i = 1; i <= N; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	cout << "\n";
	n = N;
	a = 1;
	j = 0;
	for (i = 2; i <= N; i++)
	{
		if (arr[i] != arr[i - 1])
		{
			if (a > L)
			{
				b[++j] = 0;
				n = n - a + 1;
			}
			else
			{
				for (z = 0; z < a; z++)
				{
					b[++j] = arr[i - 1];
				}
			}
			a = 0;
		}
		a++;
	}
	for (i = N; i <= N; i++)
	{
		if (a > L)
		{
			b[++j] = 0;
			n = n - a + 1;
		}
		else
		{
			for (z = 0; z < a; z++)
			{
				b[++j] = arr[i];
			}
		}
	}
	for (i = 1; i <= n; i++)
	{
		cout << "arr[" << i << "] = " << b[i] << "\n";
	}
	return 0;
}