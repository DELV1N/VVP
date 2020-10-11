#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double const Pi = 3.14;
    double a;
    cout << "Введите значение угла a\n";
    cin >> a;
    if (0 < a and a < 360) 
    {
        a = Pi * a / 180;
        cout << "Значение угла в радианах равно " << a;
    }
    else
    {
        cout << "Некорректное значение";
    }
    return 0;
}