#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B, C, dis1, dis2, comp;
    cout << "Введите значения A, B, C\n";
    cin >> A >> B >> C;
    dis1 = C - A;
    dis2 = C - B;
    comp = abs(dis1) * abs(dis2);
    cout << "Произведение длин сторон AC и BC = " << comp << "\n";
    return 0;
}