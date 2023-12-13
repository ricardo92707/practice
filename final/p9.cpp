//Let's consider that January 1st is a Monday. Write a C++ program that receives a day number 
//in January (ranging from 1 to 31) from the user and prints the corresponding day of the week (Mon, Tue, etc) using a switch statement
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number " << endl;
    cin >> num;

    num = num % 7;
    switch(num) {
        case 0: cout << "Monday" << endl;
        break;
        case 1: cout << "Tuesday";
        break;
        case 2: cout << "Wednesday";
        break;
        case 3: cout << "Thursday";
        break;
        case 4: cout << "Friday";
        break;
        case 5: cout << "Saturday";
        break;
        case 6: cout << "Sunday";
        break;
    }
}