#include <iostream>
using namespace std;

int main () {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << " Ââåäèòå ÷èñëî: " << endl;
	cin >> n;
	if ( n % 2 == 0 && n != 2 || n % 3 == 0 && n != 3 ) {
		cout << " ×èñëî " << n << " ÑÎÑÒÀÂÍÎÅ ";
	} else {
		cout << " ×èñëî " << n << " ÏÐÎÑÒÎÅ ";
	}  system(" pause ");
		return 0;
	}