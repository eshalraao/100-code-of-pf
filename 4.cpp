// Factorial


#include <iostream>
using namespace std;

long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
        cout << "Factorial is not defined for negative numbers.";
    else
        cout << "Factorial of " << num << " is " << factorialIterative(num) << endl;

    return 0;
}