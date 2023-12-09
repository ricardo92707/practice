//String Concatenation: Implement a function that concatenates two strings and returns the result.
#include<iostream>
using namespace std;

string addBoth(string s, string l) {
    return s + l;
}

int main() {
    string s1= {"Ricardo "};
    string s2= {"Ayala"};

    cout << addBoth(s1,s2);
}