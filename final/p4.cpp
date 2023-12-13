//Create a C++ program that receives a sentence from the user and encrypts it using a simple substitution cipher.
// In this cipher, each character's position is swapped with the position of the next character in the string. If the string has an odd number of characters, the last character remains in its original position.
#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    string newWord;

    for(int i=0; i<text.length(); i++) {
        
        newWord = newWord + text[i+1];
    } cout << newWord << endl;
}