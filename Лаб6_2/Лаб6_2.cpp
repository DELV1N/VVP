#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B, C;
    cout << "Введите значения A, B и C\n";
    cin >> A >> B >> C;
    swap(A, B);
    swap(B, C);
    cout << "Новые значения A,B и C равны " << A << ", " << B << ", " << C;
    return 0;
}