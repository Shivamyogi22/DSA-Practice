#include<iostream>
#include<vector>
using namespace std;

// Function to merge two sorted halves
void merge(int arr[], int start, int mid, int end) {
    vector<int>temp;
    int i = start; int j = mid+1;
    int invCount = 0;

    while(i<=mid && j<=end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
            invCount = invCount+ (mid - i + 1);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int m =0; m<temp.size(); m++){
        arr[m+start] = temp[m];
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
