//Write a C++ program that receives a string from the user and removes any duplicate characters, leaving only the first occurrence of each character.
#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    string text2;
    int count = 0;

    for(char ch : text) {
        if(text2.find(ch)==string::npos) {
            text2+= ch;
        }
    } cout << "unique characters in string are " << text2;
}