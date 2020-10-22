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
        A = A % B;
        cout << "Длина незанятой части отрезка А = " << A;
    } 
    else
    {
        cout << "Введены некорректные значения";
    }
    return 0;
}