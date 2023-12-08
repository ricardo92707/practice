//Factorial: Write a function to calculate the factorial of a given positive integer.
#include <iostream>
using namespace std;

void numFactorial(int x) {
    int sum = 1;
    for(int i=1; i<=x; i++) {
        sum = sum*i;
    } cout << sum << " is factorial of " << x;
}

int main() {
    int x;
    cout << " enter a number and display its factorial " << endl;
    cin >> x;

    numFactorial(x);
}