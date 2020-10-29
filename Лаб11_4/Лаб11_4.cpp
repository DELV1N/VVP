#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int X,Y;
	cout << "Введите координаты X и Y\n";
	cin >> X >> Y;
	if (X > 0 and Y > 0)
	{
		cout << "Точка лежит в 1-ой координатной четверти";
	}
	else if (X < 0 and Y > 0)
	{
		cout << "Точка лежит во 2-ой координатной четверти";
	}
	else if (X < 0 and Y < 0)
	{
		cout << "Точка лежит в 3-ей координатной четверти";
	}
	else if (X > 0 and Y < 0)
	{
		cout << "Точка лежит в 4-ой координатной четверти";
	}
	return 0;
}