#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // To avoid overflow for large values of left and right

        if (arr[mid] == target)
            return mid;  // Target found at index mid
        else if (arr[mid] < target)
            left = mid + 1;  // Target is in the right half
        else
            right = mid - 1;  // Target is in the left half
    }

    return -1;  // Target not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the target number to search: ";
    cin >> target;

    int result = binarySearch(arr, size, target);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
