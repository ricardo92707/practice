#include <iostream>
using namespace std;

int main() {
    int arr[] = {12,34,56,2,8,45,23,18};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n-1; i++) {
        for(int j = 0; j<n-1; j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    } for (int i : arr) {
        cout << i << " ";
    }
    
    cout << arr[0] << " is the minimum element in the array " << endl;
    cout << arr[n -1] << " is the maximum in the array " << endl;
}