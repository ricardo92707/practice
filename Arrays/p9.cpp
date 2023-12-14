//How can you copy the elements from one array to another in C++?
#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int copyArr[size];

    for(int i=0; i<size; i++) {
        copyArr[i]=arr[i];
    }

    for(int k = 0; k<size; k++) {
        cout << copyArr[k] << " ";
    }
}