#include <iostream>
using namespace std;

bool isPalindrome(string text){
    int x = 0;
    int i = text.length()-1;
    while(x<text.length()) {
        if(text[x]!=text[i]) {
            return false;
        }
        i--,x++;
    } return true;
}

int main() {
    string word = "racecar";
    cout << isPalindrome(word);
}