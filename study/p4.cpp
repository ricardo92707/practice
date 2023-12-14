/*Write a program that receives two sequence of numbers and put them in two vectors from the input (each sequence ends when 0 is entered) and the use the vectors to check if they have the same elements (in any order). Assume no number is repeated in the vectors.
Example input: 12, 2, 5, 9,0, 2, 9, 5, 12, 0
Output: Yes */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector <int> v1;
    vector <int> v2;
    int x;
    int y;
    do {
        cin >> x;
        if(x==0) {
            break;
        } v1.push_back(x);
    } while(true);
    cout << "Enter the second vector " << endl;
    do {
        cin >> y;
        if(y==0) {
            break;
        } v2.push_back(y);
    } while(true);

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    if(v1==v2) {
        cout << " equal elements in both vectors " << endl;
    } else {
        cout << " no equeal elements in vectors" << endl;
    }
}