#include <iostream>
#include <string>

using namespace std;
int main() {
    string word, wrong;
    char n;
    bool b;
    cout << "Enter word:" << endl;
    cin >> word;

    for (int i = 0; i < word.size(); i++) {
        wrong += "-";
    }
    cout << wrong << endl;

    int partWorld = word.size();
    while (partWorld > 0) {
        cout << "Enter letter: " << endl;
        cin >> n;
        b = false;
        for (int i = 0; i <= word.size(); ++i) {
            if (word[i] == n) {
                b = true;
                partWorld--;
                wrong[i] = n;
            }
        }
        if (b) {
            cout << "You're right" << endl;
            cout << wrong << endl;
        }
        else {
            cout << "You're wrong" << endl;
            cout << wrong << endl;
        }
    }
    cout << "You guessed the word:" << word << endl;
    return 0;
}