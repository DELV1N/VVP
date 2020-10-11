#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double V1, V2, S, T, a;
    cout << "Введите скорость первого и второго автомобилей, расстояние между ними и время движения\n";
    cin >> V1 >> V2 >> S >> T;
    a = (V1 + V2) * T + S;
    cout << "Расстояние между автомобилями = " << a;
    return 0;
}