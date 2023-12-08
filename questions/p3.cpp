//Even or Odd: Create a function that determines whether a given integer is even or odd and returns a corresponding message.
#include <iostream>
using namespace std;

void statusNum(int num) {
    if(num%2==0) {
        cout << num << " is a even number " << endl;
    } else {
        cout << num << " is an odd number " << endl;
    }
}

int main() {
    int x;
    cout << " enter a number and check if it is a odd or even number " << endl;
    cin >> x;
    
    statusNum(x);
}