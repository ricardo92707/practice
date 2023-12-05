// Calculate the average value of elements in a vector
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
    int avg = 0;
    int sum = 0;
    int count = 0;
    for (int z : v1)
    {
        sum += z;
        count++;
    }
    cout << sum / count << endl;
    cout << sum / v1.size();
}