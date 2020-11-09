#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите количество учебных заданий\n";
	cin >> a;
	if (a > 9 and a < 41)
	{
		switch (a)
		{
		case 10:cout << "Десять учебных заданий"; break;
		case 11:cout << "Одиннадцать учебных заданий"; break;
		case 12:cout << "Двенадцать учебных заданий"; break;
		case 13:cout << "Тринадцать учебных заданий"; break;
		case 14:cout << "Четырнадцать учебных заданий"; break;
		case 15:cout << "Пятнадцать учебных заданий"; break;
		case 16:cout << "Шестнадцать учебных заданий"; break;
		case 17:cout << "Семнадцать учебных заданий"; break;
		case 18:cout << "Восемнадцать учебных заданий"; break;
		case 19:cout << "Девятнадцать учебных заданий"; break;
		default:
			switch (a / 10)
			{
			case 2:cout << "Двадцать"; break;
			case 3:cout << "Тридцать"; break;
			case 4:cout << "Сорок"; break;
			}
			switch (a % 10)
			{
			case 1:cout << " одно учебное задание"; break;
			case 2:cout << " два учебных задания"; break;
			case 3:cout << " три учебных задания"; break;
			case 4:cout << " четыре учебных задания"; break;
			case 5:cout << " пять учебных заданий"; break;
			case 6:cout << " шесть учебных заданий"; break;
			case 7:cout << " семь учебных заданий"; break;
			case 8:cout << " восемь учебных заданий"; break;
			case 9:cout << " девять учебных заданий"; break;
			case 0:cout << " учебных заданий"; break;

			}
		}
	}
	return 0;
}