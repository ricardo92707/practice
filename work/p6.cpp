#include <iostream>
using namespace std;

int main() {
    int arr[]={5,4,3,2,1};
    cout << "Sort the array " << endl;

    for (int i=0; i<4; i++) {
        for(int k =0; k<4; k++) {

        if(arr[k]>arr[k+1]) {
            int temp = arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=temp;
        }
        }
    } 
    for (int i: arr) {
        cout << i << " ";
    }
}