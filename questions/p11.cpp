//Write a function that counts the number of occurrences of a specific character in a given string.
#include <iostream>
#include <string>
using namespace std;

int charCheck(string s1, char c1, int count=0) {
    
    for(int i=0; i< s1.length(); i++) {
        if(s1[i]==c1) {
            count++;
        }
    } return count;
}

int main() {
    string text;
    cout << "Enter a sentence " << endl;
    getline(cin, text);
    cout << "Enter a character you are looking for " << endl;
    char ch;
    cin >> ch;
    int count = 0;

    cout << charCheck(text, ch, count) << " times character is seen " << endl;


}