// Find the largest number in a vector.
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
    int max = 0;
    int min = 100;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] > max)
        {
            max = v1[i];
        }
    }
    cout << max << " is the largest in the vector " << endl;
    for (int y = 0; y < v1.size(); y++)
    {
        if (v1[y] < min)
        {
            min = v1[y];
        }
    }
    cout << min << " is the smallest vector " << endl;
}