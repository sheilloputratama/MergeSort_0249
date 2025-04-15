#include<iostream>
using namespace std;

// Create main and temporary array
int arr[20], B[20];
int n;

void input() {
    while (true) {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if (n <= 20)
        {
         break;
        }
        else
        {
        cout << "Please enter a number less than or equal to 20." << endl;
        }
    }

    cout << "\n-------------------------- " << endl;
    cout << "\nInputkan isi element array" << endl;
    cout << "\n-------------------------- " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "array index ke- " << i << " : ";
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

    // Step 4
    int i = low; // Step 4.a
    int j = mid + 1; // Step 4.b
    int k = low; // Step 4.c

    while (i <= mid && j <= high) { 
        if (arr[i] < arr[j]) { 
            B[k] = arr[i]; 
            i++; 
        } else { 
            B[k] = arr[j]; 
            j++; 
        } 
        k++; 
    }

    while (j <= high) { // Step 4.e
        B[k] = arr[j]; 
        j++; 
        k = k + 1; 
    }

    while (i <= mid) { // Step 4.f
        B[k] = arr[i]; 
        i++; 
        k++; 
    }

// Step 5
for (int x = low; x <= high; x++) {
    arr[x] = B[x]; // Step 5.a
}


}
void output() 
{
    cout << "\nData setelah diurutkan (merge sort): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
} 

int main()
{
    input();
    mergesort(0, n - 1);
    output();
}
