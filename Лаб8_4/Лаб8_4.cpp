#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите двухзначное число а ";
    cin >> a;
    if (a > 9 and a < 100)
    {
        a = a / 10 + a % 10 * 10;
        cout << "Число, получившееся при перестановке цифр = " << a;
    }
    else
    {
        cout << "Введено некорректное значение";
    }
    return 0;
}