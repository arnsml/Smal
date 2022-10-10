#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word, copy = "";
    cout << "Введите строку:\n";
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
		copy = copy + word[i];
    }
    cout << "Копия строки: " << copy << endl;
	return 0;
}