#include <iostream> 
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите год ";
	cin >> a;
	if (a > 0)
	{
		a = ((a-1)/100)+1;
		cout << "Номер столетия этого года равен " << a;
	}
	else
	{
		cout << "Введено некорректное значение";
	}
	return 0;
}