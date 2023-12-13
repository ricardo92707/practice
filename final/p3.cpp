#include <iostream>
using namespace std;

int main() {
    string word;
    string uniqueLetters;
    cout << "Enter a word " << endl;
    cin >> word;

    cout << "Find unique letters in word and print them out " << endl;

    for(char ch : word) {
        if(uniqueLetters.find(ch)==string::npos) {
            uniqueLetters+=ch;
        }
    } cout << uniqueLetters << endl;
}