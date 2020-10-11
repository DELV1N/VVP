#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a=6, b=2;
    double x, y;
    cout << "Введите значение x\n";
    cin >> x;
    y = 3 * pow(x, a) - 6 * pow(x, b) - 7;
    cout << "Значение функции y = " << y;
    return 0;
}