#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A;
	cout << "Введите значения А\n";
	cin >> A;
	cout << "Истинность высказывания: " << ((A > 9 && A<100 && A & 1) ? "False" : "True");
	return 0;
}