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
    double c = abs(a) + abs(b);
    double d = abs(a) - abs(b);
    double e = abs(a) * abs(b);
    double f = abs(a) / abs(b);
    cout << "Сумма модулей этих чисел = " << c << "\n"
         << "Разность модулей этих чисел = " << d << "\n"
         << "Произведение модулей этих чисел = " << e << "\n"
         << "Частное модулей этих чисел = " << f << "\n";
    return 0;
}