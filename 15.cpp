// Area of circle


#include <iostream>
#define PI 3.14159  // Define PI constant

using namespace std;

int main() {
    double radius, area;

    // Input radius from user
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate area
    area = PI * radius * radius;

    // Display result
    cout << "The area of the circle is: " << area << endl;

    return 0;
}