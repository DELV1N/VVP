#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double A, b=5;
    cout << "Введите значени A\n";
    cin >> A;
    A = pow(A, b) * A * A * A;
    cout << "A^8 = " << A;
    return 0;
}