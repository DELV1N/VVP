#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	cout << "Введите значения A,B и C\n";
	cin >> A >> B >> C;
	B = abs(A - B);
	C = abs(A - C);
	if (B < C)
	{
		cout << "Точка В ближе к точке А. Расстояние между ними равно " << B;
	}
	else if (B > C)
	{
		cout << "Точка C ближе к точке А. Расстояние между ними равно " << C;
	}
	else if (B == C)
	{
		cout << "Точки равноудалены от точки А. Расстояние между ними равно " << B;
	}
	return 0;
}