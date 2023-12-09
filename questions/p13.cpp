// Implement a function to find the GCD of two integers using the Euclidean algorithm
#include <iostream>
#include <numeric>
using namespace std;

int myGCD(int a, int b) {
    
    return _gcd(a,b);
}

int main() {
    int x;
    int y;
    cout << "Enter two numbers and find its greatest common denominator " << endl;
    cin >> x >> y;
    int result = myGCD(x, y);
    cout << result << " is the most common denominator " << endl;

}