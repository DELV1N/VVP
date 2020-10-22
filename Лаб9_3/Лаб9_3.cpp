#include <iostream> 
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int K,N;
	cout << "Введите день года и день с которого начался год \n";
	cin >> K >> N;
	if (K > 0 and K < 366 and N>0 and N < 8)
	{
		K = K % N;
		cout << "Номер дня недели для этого года равен " <<K;
	}
	else
	{
		cout << "Введены некорректные значения";
	}
	return 0;
}