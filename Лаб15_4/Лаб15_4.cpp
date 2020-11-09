#include <iostream>
#include <clocale>
using namespace std;
void Quarter(int x, int y)
{
	if (x > 0 and y > 0)
	{
		cout << "Точка лежит в 1-ой координатной плоскости\n";
	}
	else if (x < 0 and y>0)
	{
		cout << "Точка лежит во 2-ой координатной плоскости\n";
	}
	else if (x < 0 and y < 0)
	{
		cout << "Точка лежит в 3-ей координатной плоскости\n";
	}
	else if (x > 0 and y < 0)
	{
		cout << "Точка лежит в 4-ой координатной плоскости\n";
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y, i;
	for (i = 0; i < 3; i++)
	{
		cout << "Введите координаты х и у\n";
		cin >> x >> y;
		if (x != 0 and y != 0)
		{
			Quarter(x, y);
		}
		else
		{
			cout << "Введены некорректные значения\n";
		}
	}
	return 0;
}