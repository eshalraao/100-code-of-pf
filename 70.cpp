// While loop


#include <iostream>

using namespace std;

int main() {
    int n, i = 1;

    // Input the number of terms
    cout << "Enter a number: ";
    cin >> n;

    // Using a while loop to print numbers from 1 to n
    cout << "Numbers from 1 to " << n << " are: ";
    while (i <= n) {
        cout << i << " ";
        i++; // Increment i
    }

    cout << endl;

    return 0;
}