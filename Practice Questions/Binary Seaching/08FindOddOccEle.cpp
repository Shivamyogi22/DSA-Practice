#include <iostream>
using namespace std;


int findOddOccElement(int arr[], int n){
    int s =0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        // single element
        if(s==e){
            return s;
        }

        // mid check -> Even or Odd
        if(mid & 1){  // mid & 1 -> true -> odd number 
            if(mid -1 >=0 && arr[mid-1] == arr[mid]){
                // right m jao
                s=mid+1;
            }
            else{
                e =  mid - 1;
            }
        }
        else{
            if(mid+1 < n && arr[mid]==arr[mid+1]){
                // right m jao
                s = mid + 2;
            }
            else{
                // ya to right m hu ya phir answer k upp 
                // to issliy   e = mid
                // kyuki    e = mid - 1     se answer loss ho skta h
                e = mid;
            }
        }

        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){

    // int arr[] = {10,10, 2,2, 3,3, 21, 5,5, 6,6, 7,7};
    // int arr[] = {90, 10,10, 2,2, 3,3, 5,5, 6,6, 7,7};
    int arr[] = {10,10, 2,2, 3,3, 5,5, 6,6, 7,7, 42};
    int n = 13;

    int ans = findOddOccElement(arr, n);

    cout<< "FINAL ANSWER INDEX: "<< ans <<endl;
    cout<< "final answer is: "<< arr[ans] <<endl;

    return 0;

}