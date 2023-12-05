//Count how many times a specific element appears in an array.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[10]={1,2,2,3,3,3,5,8,3,4};
    int count =0;
    int num;
   
    cout << "What number are you looking for? " << endl;
     cin >> num;
    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        if(arr[i]==num) {
            
            count++;
        }
    } cout << num << " is seen: " << count << " times" << endl;
}