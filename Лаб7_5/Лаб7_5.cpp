#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B, x;
    cout << "Введите значения A и B\n";
    cin >> A >> B;
    if (A == 0) 
    {
        cout << "Некорректное значение A";
    }
    else
    {
        x = -B / A;
        cout << "х = " << x;
    }
    return 0;
}