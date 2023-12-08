//Sum of Two Numbers: Write a function that takes two integers as input and returns their sum.
#include <iostream>
using namespace std;

int addNumbers(int x, int y) {
    return x + y;
}

int main() {
    int num1, num2;
    cout << "enter a number " << endl;
    cin >> num1;
    cout << "enter another number and add it to previous by calling a function " << endl;
    cin >> num2;

    cout << addNumbers(num1, num2) << " is end result of adding both numbers " << endl;
}