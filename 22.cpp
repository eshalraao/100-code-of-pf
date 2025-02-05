// Volume of cone


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius, height, volume;
    const double PI = 3.141592653589793;

    // Input radius and height
    cout << "Enter the radius of the cone: ";
    cin >> radius;
    cout << "Enter the height of the cone: ";
    cin >> height;

    // Calculate volume
    volume = (1.0 / 3.0) * PI * pow(radius, 2) * height;

    // Output the result
    cout << "The volume of the cone is: " << volume << endl;

    return 0;
}