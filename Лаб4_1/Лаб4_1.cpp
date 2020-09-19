#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout << "Введите сторону прямоугольника a\n";
    cin >> a;
    cout << "Введите сторону прямоугольника b\n";
    cin >> b;
    double S = a * b;
    double P = 2 * (a + b);
    cout << "Площадь прямоугольника = " << S << ", а перимтер = " << P << "\n";
    return 0;
}