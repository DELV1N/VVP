#include <iostream>
#include <clocale>
using namespace std;
double RingS(double R1, double R2)
{
	return pow(R1, 2) * 3.14 - pow(R2, 2) * 3.14;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double R1, R2, i;
	for (i = 0; i < 3; i++)
	{
		cout << "Введите радиусы окружностей \n";
		cin >> R1 >> R2;
		if (R1 > R2)
		{
			cout << "Площадь кольца равна " << RingS(R1,R2) << "\n";
		}
		else
		{
			cout << "Введены некорректные значения";
		}
	}
	return 0;
}