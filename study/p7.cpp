//Input 6 integers into a vector. Modify the vector by doubling the value of each element, and then print the modified vector
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v1;
    vector <int> v2;

    int x;

    do {
        cin >> x;
        if(x==0) {
            break;
        } v1.push_back(x);
    } while(true);

    for(int i: v1) {
        v2.push_back(i*2);
    }
    for(int j : v2) {
        cout << j << " ";
    }
}