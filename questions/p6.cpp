// Write a function that checks if a given string is a palindrome (reads the same forwards and backward).
#include <iostream>
using namespace std; 

bool isPalidrome(string s1) {
    int i=0;
    int x=s1.length()-1;

    while(i< s1.length()) {
        if(s1[i]!=s1[x]) {
            return false;
        }
        i++, x--;
    } return true;
}

int main() {
    string word;
    cout << " enter a word and check if it is palidrome " << endl;
    cin >> word;

    cout << isPalidrome(word);
}