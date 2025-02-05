// Area of Pentagon




#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double s, area;
    
    // Input side length
    cout << "Enter the length of a side of the pentagon: ";
    cin >> s;

    // Calculate area using the formula
    area = (1.0 / 4) * sqrt(5 * (5 + 2 * sqrt(5))) * s * s;

    // Output result
    cout << "The area of the pentagon is: " << area << endl;

    return 0;
}
