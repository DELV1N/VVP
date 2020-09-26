#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x1, x2, y1, y2, a, b, S, P;
    cout << "Введите координаты первой точки (x1, y1)\n";
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки (x2, y2)\n";
    cin >> x2 >> y2;
    a = x2 - x1;
    b = y2 - y1;
    P = 2 * (abs(a) + abs(b));
    S = abs(a) * abs(b);
    cout << "Периметр прямоугольника = " << P << "\n"
         << "Площадь прямоугольника = " << S << "\n";
    return 0;
}