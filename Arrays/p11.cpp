//Create a program that reads 6 integers into two separate vectors. 
//Perform element-wise addition of these two vectors and store the result in a third vector. Finally, print the resulting vector.
#include <iostream>
#include <vector>
using namespace std;

int main() {
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

     cout << "enter second vector " << endl;

     do {
        cin >> x;
        if(x==0) {
            break;
        } v2.push_back(x);
     } while (true);

     cout << "Merge onto a third vector " << endl;

     for(int i: v1) {
        v3.push_back(i);
     } 
     for (int i: v2) {
        v3.push_back(i);
     }

     for(int k=0; k<v3.size(); k++) {
        cout << v3[k] << " ";
     }
}