//Find the smallest and largest number in an array.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[6]={87,56,33,42,12,90};
    int max = 0;
    int min = 100;

    for(int i : arr) {
        if(i>max) {
            max = i;
        }
        if(i<min) {
            min = i;
        }
    } cout << max << " is the largest element in the array " << endl;
    cout << min << " is the smallest element in the array " << endl;
}