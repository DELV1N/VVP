#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	cout << "Введите значения А, B и C \n";
	cin >> A >> B >> C;
	cout << "Истинность высказывания: " << ((A<B) && (B<C) ? "True":"False");
	return 0;
}