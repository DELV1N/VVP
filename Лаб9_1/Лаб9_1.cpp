#include <iostream> 
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "Введите количество секунд ";
	cin >> N;
	N = N % 60;
	cout << "Количество секунд прошедших с начала последней минуты равно " << N;
	return 0;
}