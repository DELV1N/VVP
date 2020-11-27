#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, * arr, i, j, a, b, c;
	cout << "Введите N\n";
	cin >> N;
	arr = new int[N];
	for (i = 1; i <= N; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	cout << "\n";
	for (i = 1; i <= N; i++)
	{
		a = 0;
		for (j = 1; j <= N; j++)
		{
			if (arr[i] == arr[j])
			{
				a++;
			}
		}
		if (a == 2)
		{
			b = i - 1;
			c = arr[i];
			for (j = i; j <= N; j++)
				if (arr[j] != c)
				{
					b++;
					arr[b] = arr[j];
				}
			N = b;		
			i--;
		}
	}
	cout << "Размер массива = " << N << "\n";
	for (i = 1; i <= N; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << "\n";
	}
	return 0;
}