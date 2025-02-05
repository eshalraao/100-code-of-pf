// static variable

#include <iostream>

using namespace std;

void counterFunction() {
    static int count = 0; // Static variable, retains its value between calls
    count++;
    cout << "Function called " << count << " times." << endl;
}

int main() {
    counterFunction();
    counterFunction();
    counterFunction();
    return 0;
}