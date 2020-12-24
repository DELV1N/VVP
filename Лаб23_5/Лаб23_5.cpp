#include <iostream>
#include <clocale>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string S, S0;
	int i, num;
	cout << "Введите символы для строки S\n";
	getline(cin, S);
	cout << "Введите символы для строки S0\n";
	getline(cin, S0);
	num = 0;
	for (i = 0; i <= S.size(); i++)
	{
		if (S.substr(i, S0.size()) == S0)
		{
			num++;
			i += S0.size() - 1;
		}
	}
	cout << "Количество вхождений строки S0 в строку S равно " << num;
	return 0;
}