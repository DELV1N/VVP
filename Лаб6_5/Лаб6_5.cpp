#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a=6,b=3;
    double x, y;
    cout << "Введите значение x\n";
    cin >> x;
    y = 4 * pow((x - 3), a) - 7 * pow((x - 3), b) + 2;
    cout << "Значение функции y = " << y;
    return 0;
}