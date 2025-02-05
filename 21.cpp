// Volume of sphere



#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius, volume;
    const double PI = 3.141592653589793;

    // Input radius
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Calculate volume
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    // Output the result
    cout << "The volume of the sphere is: " << volume << endl;

    return 0;
}