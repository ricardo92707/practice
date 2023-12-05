//Reverse the elements of an array.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int arr[5]={1,2,3,4,50};
    vector<int>v1;
    for(int i: arr) {
        v1.push_back(i);
    } reverse(v1.begin(),v1.end());
    for(int z : v1) {
        cout << z << " ";
    }
}