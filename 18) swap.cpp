#include <iostream>

using namespace std;
// передача по указателю
void Swap(int* a, int* b) {
    int temp = *a; // временная переменная 
    *a = *b; // разыменование 
    *b = temp;
}

int main() {
    int a = 32;
    int b = 45;

    cout << "a = " << a << ' ' << "b = " << b << endl;

    cout << "Swap" << endl;

    Swap(&a, &b);

    cout << "a = " << a << ' ' << "b = " << b << endl;
}

void swap2(int& a, int& b) {
    a = a xor b;
    b = b xor a;
    a = a xor b;
}
int main() {
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    swap2(a, b);
    cout << a << " " << b << endl;

    return 0;
}
