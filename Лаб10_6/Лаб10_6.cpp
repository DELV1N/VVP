#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a,b,c;
	cout << "Введите стороны треугольника a,b и c\n";
	cin >> a >> b >> c;
	cout << "Истинность высказывания: " << ((pow(a,2)+pow(b,2)==pow(c,2))||(pow(a,2)+pow(c,2)==pow(b,2))||(pow(b,2)+pow(c,2)==pow(a,2)) ? "True" : "False");
	return 0;
}