//Max of Three Numbers: Write a function that finds the maximum of three integers.
#include <iostream>
using namespace std;

void findMax(int x[], int size) {
    int max = 0;
    for(int i=0; i<size; i++) {
        if(x[i]>max) {
            max = x[i];
        }
    } cout << max << " is largest element in array " << endl;
}

int main() {
    int x[3]={3,10,5};

    findMax(x, 3);
}