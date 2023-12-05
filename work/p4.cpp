//Write a C++ program that defines a function calculateSum to find the sum and another function calculateAverage to find the average of elements in an array of integers. 
//In the main() function, ask the user to input the size of the array and its elements, then display the sum and average using these
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int calculateSum(int arr[], int size) {
    int sum =0;
    for(int i =0; i<size ; i++) {
        sum+=arr[i];
    }
    return sum;
}
double calculateAverage(int sum, int size) {
    double avg = sum/size;
    return avg;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int sum = calculateSum(arr, 9);
    cout << sum << endl;
    int avg = calculateAverage(sum, 9);
    cout << avg;
}