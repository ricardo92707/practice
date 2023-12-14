//Write a program that reads integers into two separate vectors until 0 is entered for each, then finds and prints the common elements (intersection) between these vectors.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    int x;

    do {
        cin >> x;
        if(x==0) {
            break;
        } v1.push_back(x);
    } while(true);
    cout << "Enter the second vector " << endl;
    do {
        cin >> x;
        if(x==0) {
            break;
        } v2.push_back(x);
    } while(true);

    for(int i=0; i<v1.size();i++) {
       // bool common = false;
        for(int k=0; k<v2.size(); k++) {
            if(v2[k]==v1[i]) {
                v3.push_back(v2[k]);
                break;
            } 
        } 
        } for(int i : v3) {
            cout << v3[i] << " ";
        }
    }