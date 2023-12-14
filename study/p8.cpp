//Create two vectors with 4 integers each. Merge these two vectors into a third vector and print the merged vector.
#include <iostream>
#include <vector>
using namespace std;

int main( ){
    vector <int> v1;
    vector <int> v2;
    vector <int> v3;
    int x;
    do {
        cin >> x;
        if(x==0) {
            break;
        } v1.push_back(x);
    } while(true);
    cout << " enter the second vector " << endl;
    do {
        cin >> x;
        if(x==0) {
            break;
        } v2.push_back(x);
    } while(true);
    for (int i=0; i<v1.size(); i++) {
        v3.push_back(v1[i]+v2[i]);
    }
    for (int k : v3) {
        cout << k << " ";
    }
}