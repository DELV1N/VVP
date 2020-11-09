#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double P, S;
	int K;
	S = 1000;
	cout << "Введите процент \n";
	cin >> P;
	if (P > 0 and P < 25)
	{
		P = P * 0.01 + 1;
		for (K = 0; S <= 1100; K++)
		{
			S = S * P;
		}
		cout << "Сумма вклада составит " << S << " руб.\n" << "Через столько месяцев: " << K;
	}
	else
	{
		cout << "Введено некорректное значение";
	}
	return 0;
}