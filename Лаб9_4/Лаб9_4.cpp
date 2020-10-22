#include <iostream> 
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, C, sqr, S;
	cout << "Введите стороны A и B для прямоугольника и сторону C для квадрата \n";
	cin >> A >> B >> C;
	if (A > 0 and B > 0 and C > 0)
	{
		sqr = (A * B) / (C * C);
		S = (A * B) % (C * C);
		cout << "Количество квадратов в прямоугольнике равно " << sqr << "\n"
			 << "Площадь незанятой поверхности равна " << S;
	}
	else
	{
		cout << "Введены некорректные значения";
	}
	return 0;
}