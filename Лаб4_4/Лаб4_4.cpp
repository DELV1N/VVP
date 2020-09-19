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
    double c = a * a + b * b;
    double d = a * a - b * b;
    double e = (a * a) * (b * b);
    double f = (a * a) / (b * b);
    cout << "Сумма квадратов этих чисел = " << c << "\n"
         << "Разность квадратов этих чисел = " << d << "\n"
         << "Произведение квадратов этих чисел = " << e << "\n"
         << "Частное квадратов этих чисел = " << f << "\n";
    return 0;
}