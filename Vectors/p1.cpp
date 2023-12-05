#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int x = 5;
    int arr[] = {1,2,3,4,5};

    arr[0]=120;
    cout << arr[0] << endl;
    cout << sizeof(arr)/sizeof(arr[0]);
}