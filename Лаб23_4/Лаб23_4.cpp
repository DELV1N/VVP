#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string S, a = "";
	char C;
	int i;
	cout << "Введите символ C\n";
	cin >> C;
	cout << "Введите символы\n";
	cin >> S;
	for (i = 0; i <= S.size(); i++)
	{
		a += S[i];
		if (S[i] == C)
		{
			a += S[i];
		}
	}
	S = a;
	cout << S;
	return 0;
}