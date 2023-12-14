//Write a program to calculate the sum of all elements in an integer array.
#include <iostream>
using namespace std;

int main() {
    int arr[]={45,5,6,98,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum=0;

    for(int i=0; i<size; i++) {
        sum+=arr[i];
    }
    cout << sum << " is sum of all elemnts in the array " << endl;
}