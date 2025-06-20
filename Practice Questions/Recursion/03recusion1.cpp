#include<iostream>
using namespace std;

// bool checkSorted(int *arr, int size, int index){
//     //base case:
//     if(index >= size){
//         return true;
//     }

//     if(arr[index] > arr[index-1]) {
//         bool aagekaAnswer = checkSorted(arr, size, index+1);
//         return aagekaAnswer;
//     }
//     else return false;

// }
// int main(){
//     int arr[] = {0, 20, 30, 50, 90, 400};
//     int size = 6;
//     int index = 1;

//     bool isSorted = checkSorted(arr, size, index);
    
//     if(isSorted){
//         cout <<"Congrat !!, Your array is sorted" <<endl;
//     }
//     else{
//         cout<< "NOT sorted"<<endl;
//     }
// }


///// BINARY SEAch:
 
int binarSearch(int arr[], int s, int e, int target){
    //Base case
    if(s > e){
        // element not found
        return -1;
    }

    // processing - phela case khud se solve krte h
    int mid = s + (e-s)/2;
    if(arr[mid] == target) return mid;

    // Baaki recustion dekh lega
    if(arr[mid] < target){
        //right me jao
        s= mid+1;
        return binarSearch(arr, s, e, target);
        
    }
    else{
        // left me jao
        e= mid-1;
        return binarSearch(arr, s, e, target);
    }

}   

int main(){
    int arr[] =  {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;
    int start = 0;
    int end = size - 1;

    int target = 50;

    int found = binarSearch(arr, start, end, target);

    if(found != -1){
        cout<<"Hnji, MIl gya " << found <<"th index par";
    }
    else{
        cout<<"Nhi mila bhai";
    }
}