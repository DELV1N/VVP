#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x1, x2, y1, y2, x3, y3, S, P, p, a, b, c, e = 2;
    cout << "Введите координаты первой точки (x1, y1)\n";
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки (x2, y2)\n";
    cin >> x2 >> y2;
    cout << "Введите координаты третьей точки (x3, y3)\n";
    cin >> x3 >> y3;
    a = sqrt(pow((x2 - x1), e) + pow((y2 - y1), e));
    b = sqrt(pow((x3 - x2), e) + pow((y3 - y2), e));
    c = sqrt(pow((x1 - x3), e) + pow((y1 - y3), e));
    P = a + b + c;
    p = P / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Периметр треугольника = " << P << "\n"
         << "Площадь треугольника = " << S << "\n";
    return 0;
}