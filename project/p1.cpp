#include <iostream>
#include <string>
#include <vector>
using namespace std;

void addTasks(vector<string> &task)
{
    string text;
    cout << "Enter Task: ";
    cin.ignore();
    getline(cin, text);
    task.push_back(text);
    cout << "\n";
    cout << "Task added succesfully " << endl;
}
void displayTasks(vector<string> display)
{
    cout << "To-do list: " << endl;
    for (int i = 0; i < display.size(); i++)
    {
        cout << i << " " << display[i] << endl;
    }
}
void removeTask(vector<string> &removal)
{
    cout << "Enter a task number to remove: " << endl;
    int option;
    cin >> option;
    if(option < 0) {
        cout << "Invalid entry, enter a task number" << endl;
    } else {
         removal.erase(removal.begin() + option);
         cout << "Tasks removed successfully!" << endl;
    }
   
}
void markCompleted(vector<string>&complete) {
    cout << "Enter the task number to mark as completed ";
    int option;
    cin >> option;
    if(option<0) {
        cout << "Invalid entry, enter a task number " << endl;
    } else {
        cout << "Task marked as completed " << endl;
    }
    
}

int main()
{
    cout << "Welcome to Basic To-Do List Manager " << endl;
    cout << endl;
    cout << "1. Add Task" << endl;
    cout << "2. Display Tasks" << endl;
    cout << "3. Remove Tasks" << endl;
    cout << "4. Mark Task as Completed" << endl;
    cout << "5. Exit" << endl;

    int option;
    vector<string> task;
    do
    {
        cout << "\n";
        cout << "Enter your choice: ";

        cin >> option;

        switch (option)
        {
        case 1: addTasks(task);
            break;
        case 2: displayTasks(task);
            break;
        case 3: removeTask(task);
            break;
        case 4: markCompleted(task);
            break; 
        case 5:
            cout << "Exiting Program " << endl;
            break;
        default:
            cout << "Choose an option from 1 thru 5 " << endl;
            break;
        }
    } while (option != 5);
}