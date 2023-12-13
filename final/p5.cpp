#include <iostream>
using namespace std;

int main() {
    string s1 = "race";
    string s2 = "cear";
    bool status = false;
    for(int i = 0; i<s1.length(); i++) {
        status = false;
        for(int j =0; j<s2.length(); j++) {
            if(s2[j]==s1[i]) {
                status = true;
                break;
            }
        }
    } if(status==true) {
        cout << " anagram " << endl;
    } else {
        cout << "Not an anagram " << endl;
    }
}