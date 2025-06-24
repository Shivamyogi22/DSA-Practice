#include<iostream>
#include<vector>

using namespace std;

// Function to merge two sorted halves
int merge(int arr[], int start, int mid, int end) {
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

    return  invCount;   

} 

// Recursive Merge Sort Function
int mergeSort(int arr[], int start, int end) {
    // base case
    if(start >= end) return 0;

    int mid = (start + end) / 2;

    // recursion
    int leftInv = mergeSort(arr, start, mid);     // left half
    int rightInv = mergeSort(arr, mid + 1, end);   // right half

    // backtracking - merging two halves
    int invCount = merge(arr, start, mid, end);

    return leftInv + rightInv + invCount;
}

int main() {
    int arr[] = {6, 3, 9, 5, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = mergeSort(arr, 0, size-1);
    cout<<"Inversion Count: "<< ans<<endl;


    return 0;
}
