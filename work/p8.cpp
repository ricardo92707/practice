#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[20] = {6, 7, 8, 9, 10};
    // int arr3[x];
    int n = sizeof(arr) / sizeof(arr[0]);
    int n1 = sizeof(arr2) / sizeof(arr2[0]);
    // int x = n + n1;
    for (int i = 0; i < n ; i++)
    {
        arr2[n1 + i] = arr[i];
    }
    for (int i : arr2)
    {
        cout << i << " ";
    }
    return 0;
}