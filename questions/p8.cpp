//Prime Number Check: Create a function to determine if a given integer is a prime number.
#include<iostream>
using namespace std;

bool isPrime(int num) {
    for(int i=2; i<num; i++) {
        if(num%i==0) {
            cout << num << " is not prime number " << endl;
            return false;
        } 

    } cout << num << " is a prime numebr" << endl; 
    return true;

}

int main() {
    int x;
    cout << "Enter a number and check if it is prime " << endl;
    cin >> x;

    cout << isPrime(x) << endl;
}