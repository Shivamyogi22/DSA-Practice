#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){
    // TODO
    int mid = s + (e-s)/2;
    int lenLeft = mid - s + 1;
    int lenRight =  e - mid;

    // create left and right array
    int *left = new int[lenLeft];
    int *right = new int[lenRight];


    int k = s; // starting index of left array values in orig array
    // copy values from orgi array to left array
    for(int i = 0; i<lenLeft; i++){
        left[i] = arr[k];
        k++;
    }
    
    // copy value from original array to right array
    k =  mid + 1;
    for(int i = 0; i<lenRight; i++){
        right[i] = arr[k];
        k++;
    }


    // ACTUALY MERGE LOGIC
    // LEFT and RIGHT array already sorted

    int leftIndex = 0; // left m ghume k liye
    int rightIndex = 0; // right m ghume k liye

    int mainArrIndex = s;

    while(leftIndex < lenLeft && rightIndex < lenRight){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrIndex] = left[leftIndex];
            mainArrIndex++;
            leftIndex++;
        }
        else{
            arr[mainArrIndex] = right[rightIndex];
            mainArrIndex++;
            rightIndex++;
        }
    }
    
    // 2 more cases - 
    // case 1 -> Left array exhaust but right array me elements abhi bhi bche h
    while(rightIndex < lenRight){
        arr[mainArrIndex] = right[rightIndex];
        mainArrIndex++;
        rightIndex++;
    }
    // case 2 -> right array exhaust but left array me elements abhi bhi bche h
    while(leftIndex < lenLeft){
        arr[mainArrIndex] = left[leftIndex];
        mainArrIndex++;
        leftIndex++;
    }

    // Delete the heap memeory
    delete[] left;
    delete[] right;
}

void mergeSort(int arr[], int s, int e){
    // base case
    if(s > e){
        // invalid array
        return;
    }
    if(s == e ) return;

    // break kr do
    int mid =  s + (e-s)/2;
    // s-> mid -> left
    // mid + 1 -> e -> right

    // recursion ko bula lo left ko sort kr do 
    mergeSort(arr, s, mid);
    
    // recursion ko bula lo ab right ko sort kr do 
    mergeSort(arr, mid+1, e);

    // merge 2 soreted arry
    merge(arr, s, e);
}

int main(){
    int arr[] = {2,1,6,9,4,5};
    int size = 6;
    int s = 0;
    int e = size - 1;

    cout<< "Before merge Sort" <<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;

    mergeSort(arr, s, e);

    cout<< "After merge Sort" <<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i] <<" ";
    }
}