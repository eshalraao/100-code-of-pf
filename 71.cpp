// Do while loop


#include <iostream>

using namespace std;

int main() {
    int n, i = 1;

    // Input the number of terms
    cout << "Enter a number: ";
    cin >> n;

    // Using a do-while loop to print numbers from 1 to n
    cout << "Numbers from 1 to " << n << " are: ";
    do {
        cout << i << " ";
        i++; // Increment i
    } while (i <= n); // Condition check happens after execution

    cout << endl;

    return 0;
}
