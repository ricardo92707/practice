//Create an array, add elements to it, and print the elements.
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[5];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;

    for(int i : arr) {
        cout << i << " ";
    }
}