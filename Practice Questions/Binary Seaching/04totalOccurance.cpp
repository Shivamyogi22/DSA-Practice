#include<iostream>
using namespace std; 

int firstOccurance(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    //or mid  = start+(start-end)/2;
    int ans = -1;

    while(start<=end){
        // found
        if(arr[mid] == target){
            ans = mid;
            end = mid -1;
        }
        else if(target > arr[mid]){
            // go to right
            start = mid +1;
        }
        else if(target < arr[mid]){
            // go to left 
            end = mid - 1;
        }
        // update mid:- 
        mid =  (start + end)/2;

    }
    // not found
    return ans;
}

int lastOccurance(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    // int mid = (start+end)/2;
    int mid  = start+(end - start)/2;
    int ans = -1;

    while(start<=end){
        // found
        if(arr[mid] == target){
            ans = mid;
            start = mid +1;
        }
        else if(target > arr[mid]){
            // go to right
            start = mid +1;
        }
        else if(target < arr[mid]){
            // go to left 
            end = mid - 1;
        }
        // update mid:- 
        mid = start+(end-start)/2;

    }
    // not found
    return ans;
}

int totalOccurance(int arr[], int n, int target){
    int firstOcc =  firstOccurance(arr, n, target);
    int lastOcc =  lastOccurance(arr, n, target);
    int total = lastOcc - firstOcc + 1;

    return total;
}

int main(){
    int arr[] ={10, 20, 30, 30, 30, 30, 40, 50, 60 ,70, 80, 90, 100};
    int target = 30;
    int n = 13;

    int total = totalOccurance(arr, n, target);
    cout<<"Total Occurance is "<< total<< endl;

    

    return 0;

}