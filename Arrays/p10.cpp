#include <iostream>
using namespace std;

int main()
{
    int arr[] = {6, 9, 45, 12, 6, 1, 45, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int arr2[size];
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        bool unique = true;
        for (int k = 0; k < count; k++)
        {
            if (arr2[k] == arr[i])
            {
                unique = false;
                break;
            }
        }
        if (unique)
        {
            arr2[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout << arr2[i] << " ";
    }
}