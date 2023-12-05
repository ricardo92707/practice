// Practice inserting and removing elements from a vector.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    int x;
    do
    {
        cin >> x;
        if (x == 0)
        {
            break;
        }
        else
        {
            v1.push_back(x);
        }
    } while (x != 0);

    cout << "enter a number at the end of the vector" << endl;
    cin >> x;
    v1.push_back(x);
    cout << "Enter a number at the beginning of the vector " << endl;
    v1[0] = 10;

    for (int z : v1)
    {
        cout << z << " ";
    }
    v1.pop_back();
    cout << endl;
    for (int z : v1)
    {
        cout << z << " ";
    }
    cout << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] != 7)
        {
            cout << v1[i] << " ";
        }
    }
}