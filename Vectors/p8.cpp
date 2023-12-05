//Work with a vector of strings.
#include<iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> s1={"Rick", "Alfredo","Gerado", "Miguel"};
    string s2;
    cout << "Enter you last name " << endl;
    cin >> s2;
    s1.push_back(s2);

    int i =0;
    while(i<s1.size()) {
        cout << s1[i] << " ";
        i++;
    }

}