// print the second element in an array
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << arr[1] << endl;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << arr[size - 1];
}