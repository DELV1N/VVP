#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, K, * arr, b[100], i, j, c, a, d, e;
	cout << "Введите N и K\n";
	cin >> N >> K;
	arr = new int[N];
	for (i = 1; i <= N; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	cout << "\n";
	a = 1;
	j = 0;
	e = (K == 1 ? 1 : 0);
	c = 1;
	for (i = 2; i <= N; i++)
	{
		if (arr[i] != arr[i - 1])
		{
			a++;
			if (a == K)
			{
				c = i;
			}
			d = i;
		}
		if (a == K)
		{
			e++;
		}
	}
	for (i = 1; i < c; i++)
	{
		b[++j] = arr[i];
	}
	for (i = d; i <= N; i++)
	{
		b[++j] = arr[i];
	}
	for (i = c + e; i < d; i++)
	{
		b[++j] = arr[i];
	}
	for (i = c; i < c + e; i++)
	{
		b[++j] = arr[i];
	}
	for (i = 1; i <= N; i++)
	{
		cout << "arr[" << i << "] = " << b[i] << "\n";
	}
	return 0;
}