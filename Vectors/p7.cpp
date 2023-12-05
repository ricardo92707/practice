// Check if a specific element is present in the vector
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>v1;
    int x;
    do {
        cin >> x;
        if(x==0) {
            break;
        } else {
            v1.push_back(x);
        }
    } while(x!=0);
    cout << "What number are you looking for in the vector? " << endl;
    int h;
    cin >> h;
    bool status = false;
    for(int i : v1) {
        if(i==h) {
            status = true;
            break;
        }
    } if (true) {
        cout << h << " was found in the vector " << endl;
    } else {
        cout << h << " was not found in the vector " << endl;
    }
}