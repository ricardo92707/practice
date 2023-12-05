//Create a C++ program that defines functions findMax and findMin to determine the maximum and minimum elements in an array of integers respectively.
// In the main() function, ask the user to input the size of the array and its elements, then display the maximum and minimum using these functions.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAX_SIZE = 100;



int main()
{
    
    int arr[MAX_SIZE];
    int count = 0;
    int num = 0;

    cout << "Enter -1 to get out of array input" << endl;

    while (count < MAX_SIZE)
    {
        cin >> num;
        if (num==-1) {
            break;
        } else {
            arr[count]=num;
        }
            count++;
    }
}