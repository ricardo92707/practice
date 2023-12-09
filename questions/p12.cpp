//Calculate Average: Create a function that calculates the average of an array of numbers.
#include <iostream>
using namespace std;

int arrAverage(int arr[], int size, int sum) {
    for(int i=0; i<size; i++) {
        sum+=arr[i];
    } return sum;
}

int main() {
    int arr[6]={1,2,3,4,5,6};
    int arrSize = sizeof(arr)/sizeof(int);
    int sum = 0;

    cout << arrAverage(arr, arrSize, sum) << " is the average of the array " << endl;
}