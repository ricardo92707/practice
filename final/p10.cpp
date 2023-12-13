// in 10 integers into a vector and print out only the unique numbers
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v1;
    int x;
    int i = 0;
    while(i<10) {
        cin >> x;
        v1.push_back(x);
        i++;
    }
    vector<int> v2;
    for(int i=0; i<v1.size(); i++) {
        bool unique = true;
        for(int j =0; j<v2.size(); j++) {
            if(v2[j]==v1[i]) {
                unique = false;
                break;
            } 
      } if(unique) {
        v2.push_back(v1[i]);
      }
    } for(int i : v2) {
        cout << i << " ";
    }
}