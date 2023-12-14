#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 23, 1, 45, 6, 7, 23, 98, 9, 7};
    cout << "Find unique elements of array " << endl;
    int arr2[20];
    int n = sizeof(arr) / sizeof(arr[0]);
    int uniquecount = 0;
    //bool isUnique = true;
    for (int i = 0; i < n; i++)
    {
        bool isUnique = true;
        for (int k = 0; k < uniquecount; k++)
        {
            if (arr2[k] == arr[i])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            arr2[uniquecount] = arr[i];
            uniquecount++;
        }
    }
    for (int i=0; i<uniquecount ; i++) {
            cout << arr2[i] << " ";
    }
   
}