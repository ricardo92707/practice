/*Write a program to receive integers (stop when 0 entered), put them in a vector and then use the vector to find and print out sum of all numbers except maximum value in the list.
Example input: 12, 2, 5, 9, 13, 3, 23, 9, 0
Output: 53 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    vector <int> v1;
    int x;
    do {
        cin >> x;
        if(x==0) {
            break;
        } v1.push_back(x);
    } while(x!=0);
    sort(v1.begin(),v1.end());
    v1.pop_back();
    int sum = 0;
    for(int i: v1) {
        sum+=i;
    } cout << sum << " is sum of all elements in vector exept maximum value";
}