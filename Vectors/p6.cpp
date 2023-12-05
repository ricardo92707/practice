//Reverse the elements of a vector.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
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
    reverse(v1.begin(), v1.end());
    for(int z : v1) {
        cout << z << " ";
    }
}