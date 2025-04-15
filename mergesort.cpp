#include<iostream>
using namespace std;

// Create main and temporary array
int arr[20], B[20];
int n;

void input() {
    while (true) {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if (n <= 20) break;
        else cout << "Please enter a number less than or equal to 20." << endl;
    }

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Create function to merge two sorted arrays
void mergesort(int low, int high) { // Step 1
    if (low >= high) {
        return; // Step 1.a
    }

    int mid = (low + high) / 2; // Step 2

    // Step 3
    mergesort(low, mid); // Step 3.a
    mergesort(mid + 1, high); // Step 3.b

    