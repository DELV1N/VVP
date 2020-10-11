#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double A1, B1, C1, A2, B2, C2, x, y;
    cout << "Введите значения A1, B1, C1, A2, B2, C2\n";
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
    y = -(2*C2) + 3*C1;
    x = (C1 - 5 * y) / A1;
    cout << "х = " << x << "\n"
         << "y = " << y;
    return 0;
}