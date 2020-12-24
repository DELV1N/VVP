#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string S;
	int i;
	cout << "Введите символы\n";
	cin >> S;
	for (i = 0; i < S.size(); i++)
	{
		cout << S[i] << " ";
	}
	return 0;
}