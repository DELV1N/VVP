#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B, C, dis1, dis2, sum;
    cout << "Введите точки A, B и C\n";
    cin >> A >> B >> C;
    dis1 = C - A;
    dis2 = C - B;
    sum = abs(dis1) + abs(dis2);
    cout << "Длина отрезка AC = " << abs(dis1) << "\n"
         << "Длина отрезка BC = " << abs(dis2) << "\n"
         << "Сумма длин отрезков = " << sum;
    return 0;
}