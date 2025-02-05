// Area of rhombus





#include <iostream>

using namespace std;

int main() {
    double d1, d2, area;

    // Input diagonals
    cout << "Enter the first diagonal: ";
    cin >> d1;
    cout << "Enter the second diagonal: ";
    cin >> d2;

    // Calculate area
    area = (d1 * d2) / 2;

    // Output result
    cout << "The area of the rhombus is: " << area << endl;

    return 0;
}
