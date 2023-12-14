//Develop a program that reads integers into a vector until 0 is entered, then counts the frequency of each element and prints the elements along with their frequencies.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;
    int x;
    do {
        cin >> x;
        if(x==0) {
            break;
        } v1.push_back(x);
    } while(true);

    int count = 0;
    for(int i=0; i<v1.size(); i++) {
        count = 0;
        for(int k=0; k<v1.size(); k++) {
            if(v1[k]==v1[i]) {
                count++;
            }
        } cout << v1[i] << " appears " << count << endl;
        
    }
}