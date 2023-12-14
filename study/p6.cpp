//Write a program to input 10 integers into a vector and then prompt the user to enter a number to search for in the vector. Output whether the number was found or not.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v1;
    int x;
    do {
        cin >> x;
        if(x==0) {
            break;
        } v1.push_back(x);
    } while(true);
    cout << " enter a number you are looking for in the vector " << endl;
    int num;
    cin >> num;
    
    for (int i : v1) {
        if(i==num) {
            cout << " Found " << endl;
            break;
        }
    }
    }
