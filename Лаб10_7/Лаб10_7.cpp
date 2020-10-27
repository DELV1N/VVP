#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите стороны треугольника a,b и c\n";
	cin >> a >> b >> c;
	cout << "Истинность высказывания: " << ((a+b>c)&&(a+c>b)&&(b+c>a) ? "True" : "False");
	return 0;
}