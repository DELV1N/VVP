#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	char C;
	cout << "Введите исходное направление робота (N-север, S-юг, W-запад, E-восток)\n";
	cin >> C;
	cout << "Введите команду для робота (0 - продолжать движение, 1 - поворот налево, -1 - поворот направо)\n";
	cin >> N;
	cout << "Направление робота - ";
	switch (N)
	{
	case 0: switch (C)
	{
	case 'N': cout << "С"; break;
	case 'S': cout << "Ю"; break;
	case 'W': cout << "З"; break;
	case 'E': cout << "В"; break;
	} break;
	case 1: switch (C)
	{
	case 'N': cout << "З"; break;
	case 'S': cout << "В"; break;
	case 'W': cout << "Ю"; break;
    case 'E': cout << "С"; break;
	} break;
	case -1: switch (C)
	{
	case 'N': cout << "В"; break;
	case 'S': cout << "З"; break;
	case 'W': cout << "С"; break;
	case 'E': cout << "Ю"; break;
	} break;
	}
	return 0;
}