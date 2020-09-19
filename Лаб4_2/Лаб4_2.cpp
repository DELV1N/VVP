#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double d;
    double Pi = 3.14;
    cout << "Введите диаметр окружности\n";
    cin >> d;
    double L = Pi * d;
    cout << "Длина окружности = " << L << "\n";
    return 0;
}