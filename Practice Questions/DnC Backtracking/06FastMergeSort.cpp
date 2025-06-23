#include<iostream>
using namespace std;

// Function to merge two sorted halves
void merge(int arr[], int start, int mid, int end) {
    int temp[1000];  // assuming array size won't exceed 1000
    int i = start;
    int j = mid + 1;
    int k = start;

    while(i <= mid && j <= end) {
        if(arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
        }
    }

    // Copy remaining elements
    while(i <= mid) {
        temp[k++] = arr[i++];
    }

    while(j <= end) {
        temp[k++] = arr[j++];
    }

    // Copy back to original array
    for(int x = start; x <= end; x++) {
        arr[x] = temp[x];
    }
}

// Recursive Merge Sort Function
void mergeSort(int arr[], int start, int end) {
    // base case
    if(start >= end) return;

    int mid = (start + end) / 2;

    // recursion
    mergeSort(arr, start, mid);     // left half
    mergeSort(arr, mid + 1, end);   // right half

    // backtracking - merging two halves
    merge(arr, start, mid, end);
}

int main() {
    int arr[] = {6, 3, 9, 5, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, size - 1);

    cout << "After sorting: ";
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
