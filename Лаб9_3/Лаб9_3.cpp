#include <iostream> 
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int K,N,a;
	cout << "Введите день года и день с которого начался год \n";
	cin >> K >> N;
	if (K > 0 and K < 366 and N>0 and N < 8)
	{
		a = K % 7 + N - 1;
		if (a == 0)
		{
			a == 7;
		    cout << "Номер дня недели для этого года равен " << a;
		}
		else
		{
			cout << "Номер дня недели для этого года равен " << a;
		}
	}
	else
	{
		cout << "Введены некорректные значения";
	}
	return 0;
}