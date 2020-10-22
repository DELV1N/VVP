#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите размер файла в байтах ";
    cin >> a;
    a = a / 1024;
    cout << "Количество полных килобайтов, которые занимает данный файл " << a;
    return 0;
}