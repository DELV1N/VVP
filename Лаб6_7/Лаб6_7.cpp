#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double A, b=10;
    cout << "Введите значение A\n";
    cin >> A;
    A = pow(A, b) * A * A * A * A * A;
    cout << "A^15 = " << A;
    return 0;
}