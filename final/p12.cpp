//Create a C++ program that defines a function called swapValues which swaps the values of two integer variables 
//using reference parameters. In the main() function, ask the user for two integers, swap their values using the swapValues function, and display the swapped values.
#include <iostream>
using namespace std;

void swapValues(int&one, int&two) {
    int temp = one;
    one = two;
    two = temp;
   // cout << one << " " << two << endl;
}

int main() {
    int x = 20;
    int y = 10;

     swapValues(x, y);
    cout << x << " " << y;
}