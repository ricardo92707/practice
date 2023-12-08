//Implement a function that calculates the power of a number (e.g., x^y).
#include <iostream>
#include <cmath>
using namespace std;

void powerRaise(int x) {
    cout << pow(x, 2);
}

int main() {
    cout << "Enter a number to get the power raised to 2 of it " << endl;
    int x;
    cin >> x;
    
    powerRaise(x);
}