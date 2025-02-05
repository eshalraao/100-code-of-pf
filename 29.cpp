// shell sort

#include <iostream>

using namespace std;

// Function to perform Shell Sort
void shellSort(int arr[], int n) {
    // Start with a large gap, then reduce it
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Perform insertion sort for this gap size
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            
            // Shift earlier elements until the correct position is found
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;

    // Input array size
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting the array using Shell Sort
    shellSort(arr, n);

    // Display sorted array
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}