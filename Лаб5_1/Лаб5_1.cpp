#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x1, x2, y1, y2, Dis, a=2;
    cout << "Введите координаты первой точки (x1, y1)\n";
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки (x2, y2)\n";
    cin >> x2 >> y2;
    Dis = sqrt(pow((x2-x1),a)+pow((y2-y1),a));
    cout << "Расстояние между точками = " << Dis << "\n";
    return 0;
}