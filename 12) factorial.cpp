#include <iostream>
#include <string>
using namespace std;

int main(){ 
	setlocale(LC_ALL, "Russian");
	string s;
	int f;
	cout << "Введите число" << endl;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != '1' and s[i] != '2' and s[i] != '3' and s[i] != '4' and s[i] != '5' and s[i] != '6' and s[i] != '7' and s[i] != '8' and s[i] != '9' and s[i] != '0' and s[i] != '-' and s[i] != ',' and s[i] != '.') {
			cout << "Вы должны ввести число" << endl;
			return 0;
		}
		if ( s[i] == ',' || s[i] == '.') {
			cout << "Вы можете ввести только целые числа" << endl;
			return 0;
		}
	}
	int n = stoi(s);
	if (n < 0) {
		cout << "Вы можете вводить только положительные числа" << endl;
		return 0;
	}
	if (n == 0) {
		cout << "Факториал = 1" << endl;
		return 0;
	}
	f = 1;
	for (int i = 1; i <= n; i++) 
	{
		f *= i;
	}
	cout << "Факториал = " << f << endl;
}