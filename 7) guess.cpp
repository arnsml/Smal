#include <iostream>
using namespace std;

int main () {
	setlocale(LC_ALL, "Russian");
	int i = 0;
	int a = 0, b = 100;
	int n;
	int number;
	cout << " ��������� ����� N �� 1 �� 100 " << endl;
	while ( n != 3 ) {
		cout << " N ������ " << a + ( b - a ) / 2 << " ( 1 - ��, 2 - ���, 3 - ����� ) ? " << endl;
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
	   cout << " �� �������� " << number << " ���������� ������� " << i << endl;
	  system("pause");
	return 0;
}

	