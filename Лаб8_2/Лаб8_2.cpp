#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B;
    cout << "Введите значения A и B \n";
    cin >> A >> B;
    if (A > B)
    {
        A = A / B;
        cout << "Количество отрезков B на отрезке A равно " << A;
    }
    else
    {
        cout << "Введены недопустимые значения";
    }
    return 0;
}