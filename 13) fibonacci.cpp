#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    string s;
	int fib;
	cout << "Введите количество числ Фибоначчи" << endl;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' && s[i] != '6' && s[i] != '7' && s[i] != '8' && s[i] != '9' && s[i] != '0' && s[i] != '-' && s[i] != ',' && s[i] != '.' )
		{
			cout << "Вам нужно ввести число";
			return 0;
		}
		if (s[i] == '.' || s[i] == ',')
		{
			cout << "Вы можете ввести только целые числа";
			return 0;
		} 
	}
    int num1 = 0;
    int num2 = 1;
    int num_temp;
    int num_next = 1;
    int n = stoi (s);
    if (n>=1) {
        cout << 0 << " ";
    }
    if (n>=2) {
        cout << 1 << " ";
    } 
    if (n < 0)
	{
		cout << "Вы можете вводить только положительные числа" << endl;
		return 0;
	}
	if ( n > 47 ) {
	    cout << "Введите число не превышающее 47" << endl;
	    return 0;
	}
    for (int i = 0; i < n-2; i++) {
        num_next = num1 + num2;
        cout << num_next << " ";
        num1 = num2;
        num2 = num_next;
    }
    cout << endl;
    return 0;
}
