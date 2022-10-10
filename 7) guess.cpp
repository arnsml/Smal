#include <iostream>
using namespace std;

int main () {
	setlocale(LC_ALL, "Russian");
	int i = 0;
	int a = 0, b = 100;
	int n;
	int number;
	cout << " Задумайте число N от 1 до 100 " << endl;
	while ( n != 3 ) {
		cout << " N больше " << a + ( b - a ) / 2 << " ( 1 - да, 2 - нет, 3 - равно ) ? " << endl;
		cin >> n;
		if ( n == 1 ) {
		a += ( b - a ) / 2;
		} else if ( n == 2 ) {
		b -= ( b - a ) / 2;
		} else {
		number = a + ( b - a ) / 2;
		}
		i++;
	}
	   cout << " Вы задумали " << number << " Количество попыток " << i << endl;
	  system("pause");
	return 0;
}

	