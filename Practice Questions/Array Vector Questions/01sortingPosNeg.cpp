#include<iostream>
using namespace std;


void sortNegPosNumb(int arr[], int n){
    // using 2 pointer where one is index and other is j
    int j = 0;
    for(int index = 0; index<n; index++){
        if(arr[index]<0 ){
            swap(arr[index], arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[] = {24,4 ,-1, -2,2,3,45,-9};
    int n = 8;

    sortNegPosNumb(arr, n);

    for(int i =0; i<n; i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}