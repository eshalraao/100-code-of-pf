// Happy number


#include <iostream>
#include <unordered_set>
using namespace std;

// Function to find the sum of squares of digits
int sumOfSquares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

// Function to check if a number is happy
bool isHappy(int num) {
    unordered_set<int> seen;  // To detect cycles

    while (num != 1 && seen.find(num) == seen.end()) {
        seen.insert(num);  // Mark number as seen
        num = sumOfSquares(num);  // Replace with sum of squares of digits
    }

    return num == 1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isHappy(num))
        cout << num << " is a Happy Number.\n";
    else
        cout << num << " is NOT a Happy Number.\n";

    return 0;
}
