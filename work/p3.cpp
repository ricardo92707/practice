//Create a C++ program that defines a function called swapValues which swaps the values of two integer variables
// using reference parameters. In the main() function, ask the user for two integers, swap their values using the swapValues function, and display the swapped values.
#include <iostream>
#include <vector>
using namespace std;

int swapValues(int& a, int& b) {
    a = 10;
    b = 20;
    return 0;
}

int main() {
    int x, y;
    x = 2;
    y = 4;
    swapValues(x,y);

    cout << x << " " << y;
}

