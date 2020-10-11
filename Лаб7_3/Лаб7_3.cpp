#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double X, A, Y, a;
    cout << "Введите вес и цену конфет\n";
    cin >> X >> A;
    a = A / X;
    cout << "Введите вес конфет для которых надо найти цену\n";
    cin >> Y;
    Y = a * Y;
    cout << "Цена за 1 кг конфет = " << a << "\n"
         << "Цена за Y кг конфет = " << Y;
    return 0;
}