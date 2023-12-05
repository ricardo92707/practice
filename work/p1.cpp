#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const double pi{3.14159};
double calc_area_circle(double radius) {
    return pi*radius*radius;
}

 void area_circle() {
    cout << " enter the radius of the circle " << endl;
    int radius;
    cin >> radius;

    cout << "the area of the circle with a radius: " << radius << " is " << calc_area_circle(radius) << endl;
 }

 int main() {
    area_circle();
 }