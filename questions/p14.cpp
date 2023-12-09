// Simple Calculator: Build a simple calculator program that performs addition, subtraction, multiplication, and division operations using functions.
#include <iostream>
using namespace std;

int multiplyNumbers(int a, int b)
{
    return a * b;
}
int divideNumbers(int a, int b)
{
    return a / b;
}
int subtractNumbers(int a, int b)
{
    return a - b;
}
int addNumbers(int a, int b)
{
    return a + b;
}

int main()
{

    char ch;
    do
    {
        cout << " Enter two numbers " << endl;
        int x;
        int y;
        cin >> x >> y;
        cout << "Choose an operation 1(Addition)2(Subtract)3(Division)4(Multiply ) or 0 to exit " << endl;
        int option;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << addNumbers(x, y) << endl;
            break;
        case 2:
            cout << subtractNumbers(x, y) << endl;
            break;
        case 3:
            cout << divideNumbers(x, y) << endl;
            break;
        case 4:
            cout << multiplyNumbers(x, y) << endl;
            break;
        default:
            cout << "Choose a number 1-4 " << endl;
            break;
        }
        cout << "Do you wish to continue? Y/N " << endl;
        cin >> ch;
    } while (ch != 'n' || ch != 'N');
}