#include <iostream>
using namespace std;



int main() {
    cout << "Welcome to Basic To-Do List Manager " << endl;
    cout << endl;
    cout << "1. Add Task" << endl;
    cout << "2. Display Tasks" << endl;
    cout << "3. Remove Tasks" << endl;
    cout << "4. Mark Task as Completed" << endl;
    cout << "5. Exit" << endl;
    int option;
    do {
        cout << "Enter your choice: ";
        cin >> option;
        cout << "\n";
        switch(option) {
            case 1: 
            break;
            case 2:
            break;
            case 3: 
            break;
            case 4: 
            break;
            case 5: cout << "Exiting Program " << endl;
            break;
            default: cout << "Choose a number from 1 thru 5 " << endl;
            break;
        }
    } while(option!=5);
}