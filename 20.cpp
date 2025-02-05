//  Largest number


#include<iostream>
using namespace std;

int main() {
    int n;
    
    // Ask user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    
    // Input elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Find the largest number
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    cout << "The largest number is: " << largest << endl;
    
    return 0;
}
