// for loop



#include <iostream>

using namespace std;

int main() {
    int n;

    // Input the number of terms
    cout << "Enter a number: ";
    cin >> n;

    // Using a for loop to print numbers from 1 to n
    cout << "Numbers from 1 to " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
