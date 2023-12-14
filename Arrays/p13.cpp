// Create a program that reads integers into a vector until 0 is entered, then rotates the elements of the vector by a given number of positions (input from the user) to the left and prints the rotated vector.
// Example:  Input vector: Rotated by 2 to the left:
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
        v1.push_back(x);
    } while (true);

    vector<int> v2;

    for (int i = 2; i < v1.size(); i++)
    {
        v2.push_back(v1[i]);
    }
    for(int j=0; j<2; j++) {
        v2.push_back(v1[j]);
    }
    
    for (int k=0; k< v2.size(); k++)
    {
        cout << v2[k] << " ";
    }
}