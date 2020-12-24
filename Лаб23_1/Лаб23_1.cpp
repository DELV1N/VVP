#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char C;
	cout << "Введите символ\n";
	cin >> C;
	cout << "Предшествующий символ: " << char(C - 1) << "\nПоследующий символ: " << char(C + 1);
	return 0;
}