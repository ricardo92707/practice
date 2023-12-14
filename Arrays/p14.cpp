//Write a program that reads integers into a vector until 0 is entered, then calculates and prints the average and variance of the elements in the vector.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v1;
    int x;

    do {
        cin >> x;
        if(x==0) {
            break;
        } v1.push_back(x);

    } while(true);
    double sum=0;
    for(int i=0; i<v1.size(); i++) {
        sum+=v1[i];
    }
    cout << "Average is " << sum/v1.size();
}