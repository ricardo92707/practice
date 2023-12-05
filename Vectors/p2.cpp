//Create a vector, add elements to it, and print the elements.
#include<iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> num1;
    int x;
    do {
        cin >> x;
        if(x==0) {
            break;
        } else {
            num1.push_back(x);
        }
    } while(x!=0);

    for(int z : num1) {
        cout << z << " ";
    }
}