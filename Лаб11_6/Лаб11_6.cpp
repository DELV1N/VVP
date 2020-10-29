#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите число а\n";
	cin >> a;
	if (a > 0 and a < 1000)
	{
		if (a % 2 == 0)
		{
			cout << "Чётное ";
		}
	    else 
	    {
		    cout << "Нечётное ";
	    }
	    if (a < 10)
	    {
		    cout << "однозначное ";
	    }
		if (a < 100 and a > 9)
		{
			cout << "двузначное ";
		}
		if (a < 1000 and a > 99)
		{
			cout << "трёхначное ";
		}
	}
	cout << "число";
	return 0;
}