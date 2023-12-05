//Write a C++ program that defines a function called isPalindrome which takes a string parameter and
// returns true if the string is a palindrome (reads the same forwards and backwards)
//, and false otherwise. In the main() function, ask the user for a string and display whether it is a palindrome or not using the isPalindrome function.
#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string s) {
    bool status = false;
        for(int i =0; i<s.length(); i++) {
            status = true;
            for(int x = s.length()-1; x>=0; x--) {
                if (s[x]==s[i]) {
                    status = true;
                    break;
                }
               
            } 
        } if(status) {
            cout << s << " is palindrome" << endl;
        } else {
            cout << s << " is not palindrome " << endl;
        } 
         return status;
}

int main() {
    string s1;
    cout << "enter a word and check if it is palindrome " << endl;
    cin >> s1;
    isPalindrome(s1);
    
    
}