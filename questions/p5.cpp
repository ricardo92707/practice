//Swap Two Numbers: Create a function that swaps the values of two integers passed as arguments.
#include <iostream>
using namespace std;

void swapValues(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << x << " is x" << endl;
    cout << y << " is y" << endl;
}

int main() {
    int x = 10;
    int y = 20;
    swapValues(x,y);
}