#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout << "Введите число a\n";
    cin >> a;
    cout << "Введите число b\n";
    cin >> b;
    double c = (a + b) / 2;
    cout << "Среднее арифметическое этих чисел = " << c << "\n";
    return 0;
}