#include <iostream>
using namespace std;

int main() {
    int arr[10], size, target, occurrences = 0;

    // Ask user for the size of the array
    cout << "Enter the size of the array (max 10): ";
    cin >> size;

    // Check if the size is within the bounds
    if (size > 10) {
        cout << "Error: Size exceeds the maximum limit." << endl;
        return 1;
    }

    // Ask user to input the elements of the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Ask user for the element to search for
    cout << "Enter the element to search for: ";
    cin >> target;

    // Search for the element in the array
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            occurrences++;
        }
    }

    if (occurrences > 0) {
        cout << "Element found " << occurrences << " times." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
