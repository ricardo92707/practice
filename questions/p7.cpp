// Implement a function that reverses the elements in an integer array.
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    
    for(int i=size-1; i>=0; i--) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[5]={1,2,3,4,5};
    int arrSize= sizeof(arr)/sizeof(int);

    reverseArray(arr, arrSize);



}