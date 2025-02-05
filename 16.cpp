// Area of triangle



#include <iostream>
using namespace std;

int main() {
    double base, height, area;

    // Input base and height
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Calculate area
    area = 0.5 * base * height;

    // Display result
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
