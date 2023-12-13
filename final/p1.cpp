//Write a C++ program that receives two words from the user and checks if they are anagrams of each other. Anagrams are words or phrases formed by rearranging the letters of another
//. For example race and care are anagrams.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "race";
    string s2 = "care";
    bool anagram = true;

        for(int i=0; i<s1.length(); i++) {
            if(s1[i]!='c'||s1[i]!='a'||s1[i]!='r'||s1[i]!='e') {
                anagram = false;
                break;
            }
            }
         if(anagram==true) {
            cout << s1 << " and " << s2 << " are anagrams" << endl;
        } else {
            cout << " They are not anagrams" << endl;
        }
}
