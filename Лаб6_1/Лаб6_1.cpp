#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B;
    cout << "Введите значения A и B\n";
    cin >> A >> B;
    swap(A, B);
    cout << "Новые значения A и B равны " << A << " и " << B;
    return 0;
}