// array of 20 integers, print out the max and min
#include <iostream>
using namespace std;

int findMax(int num[], int arrsize){
    int i=0;
    int j=1;
    int max = num[0];
    while(i<arrsize) {
        if(num[j]>max) {
            max = num[i];
        }
        i++;
    } return max;
}
int findMin(int num[], int arrSize) {
    int small = num[0];
    int x = 1;
    int i =0;
    while(i<arrSize) {
        if(num[x]<small) {
            small = num[x];
        }
        i++;
    } return small;
} 

int main() {
    const int arrSize = 20;
    int num[arrSize];
    int i=0;
    while(i<arrSize) {
        cin >> num[i];
        i++;
    } 
    cout << findMax(num, arrSize) << " is max value " << endl;
    cout << findMin(num, arrSize) << " is smallest value" << endl;
}