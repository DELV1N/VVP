#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string a;
	int i, num;
	cout << "Введите символы\n";
	cin >> a;
	num = 0;
	for (i = 0; i <= a.size(); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			num++;
		}
	}
	cout << "Количество прописных латинских букв равно " << num;
	return 0;
}