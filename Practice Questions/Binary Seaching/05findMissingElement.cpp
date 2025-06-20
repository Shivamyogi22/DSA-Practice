#include<iostream>
using namespace std; 

int missingNumber(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start+ (end-start)/2;
    //or mid  = start+(start-end)/2;
    int ans = -1;

    while(start<=end){
        int diff = arr[mid] - mid;
        // found
        if(diff == 1){
            start = mid + 1;
        }
        else{
            // ans store
            ans = mid;
            // go to left
            end = mid - 1;
        } 
        mid = start + (end - start)/2;

    }

    if(ans + 1 == 0){
        return n+1;
    }
    
    return ans + 1;
}



int main(){
    int arr[] ={1, 2, 3, 4, 5, 7, 8, 9, 10 ,11, 12, 13};
    // int arr[] ={1, 2, 3, 4, 5, 6, 7, 8, 9 ,10, 11, 12};  // for edge case last number missing
    int target = 30;
    int n = 12;

    int miss = missingNumber(arr, n);
    cout<<"Missing element is: "<< missingNumber(arr, n)<< endl;

    

    return 0;

}