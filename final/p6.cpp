//search for a word in the string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "How to howl at the moon ";
    string word = "hello";
    int count =0;
   for(int i=0; i < text.length()-word.length(); i++) {
        count=0;
    for(int j=0; j < word.length(); j++) {
        if(word[j]==text[i+j]) {
            count++;
        }
    }
   } if(count==5) {
    cout << word << " was found in the string text " << endl;
   } else {
    cout << word << " was not dound inf the text string " << endl;
   }
}