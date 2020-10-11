#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double const Pi = 3.14;
    double a;
    cout << "Введите значение а в радианах\n";
    cin >> a;
    if (a < 2 * Pi and 0<a)
    {
        a = a * 180 / Pi;
        cout << "Значение угла в градусах равно " << a;
    }
    else
    {
        cout << "Некорректное значение";
    }
    return 0;
}