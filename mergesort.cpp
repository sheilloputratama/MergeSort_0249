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

    