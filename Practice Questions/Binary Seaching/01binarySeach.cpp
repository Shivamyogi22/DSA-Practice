#include<iostream>
using namespace std; 

int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    //or mid  = start+(start-end)/2;

    while(start<=end){
        // found
        if(arr[mid]== target){
            // return index of the found element
            return mid;
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
    return -1;
}

int main(){
    int arr[] ={10, 20, 30, 40, 50, 60 ,70, 80, 90, 100};
    int target = 80;
    int n =10;

    int ansIndex = binarySearch(arr, n, target);

    if(ansIndex == -1){
        cout<<"Element not found"<< endl;
    }
    else{
        cout<<"Element found at index: \n" << ansIndex << endl;
    }

    return 0;

}