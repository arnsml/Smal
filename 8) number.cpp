#include <iostream>
using namespace std;

int main () {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << " ������� �����: " << endl;
	cin >> n;
	if ( n % 2 == 0 && n != 2 || n % 3 == 0 && n != 3 ) {
		cout << " ����� " << n << " ��������� ";
	} else {
		cout << " ����� " << n << " ������� ";
	}  system(" pause ");
		return 0;
	}