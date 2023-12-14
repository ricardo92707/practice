#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5,6,21,987,45,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++) {
        for(int k=0; k<size; k++) {
            if(arr[k]>arr[k+1]) {
                int temp = arr[k];
                arr[k]= arr[k+1];
                arr[k+1]=temp;
            }
        }
    } for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n" << arr[0] << " is the smallest in the array " << endl;
    cout << arr[size-1] << " is the largest in the array " << endl;
}