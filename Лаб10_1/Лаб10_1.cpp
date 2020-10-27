#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B;
	cout << "Введите значения А и В \n";
	cin >> A >> B;
	cout << "Истинность высказывания: " << ((A > 2) && (B <= 3)?"True":"False");
	return 0;
}