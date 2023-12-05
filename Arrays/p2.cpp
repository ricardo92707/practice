//Calculate the sum of all elements in an array.
#include<iostream>
#include <vector>
using namespace std;

int main() {
    int arr[5]={10,20,30,40,50};
    int sum = 0;
    for (int z : arr) {
        sum+=z;
    } cout << sum << " is the sum of the array elements " << endl;
}