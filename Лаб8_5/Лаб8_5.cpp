#include <iostream> 
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите трёхзначное число a ";
	cin >> a;
	if (a > 99 and a < 1000)
	{
		a = a%100*10+a/100;
		cout << "Переделаное число равно " << a;
	}
	else
	{
		cout << "Введено некорректное значение";
	}
	return 0;
}