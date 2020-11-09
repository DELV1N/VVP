#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	double i;
	cout << "Введите стоимость 1 кг конфет \n";
	cin >> a;
	for (i = 0.1; i <= 1; i += 0.1)
	{
		cout << i << " кг конфет стоит " << a*i << "\n";
	}
	return 0;
}