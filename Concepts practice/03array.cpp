#include <iostream>
using namespace std;

// int main(){
    // int a = 10;
    // cout<< "Size of a: "<< sizeof(a) << endl;
    
    // int arr[10];
    // cout<< "Size of arr: "<< sizeof(arr) << endl;
    
    // int arr[] ={1,2,3,4,5};
    // int brr[5] ={1,2,3,4,5};
    // int crr[5] = {1,2,34,5,6};
    // int drr[5] = {1,2};

    //###################################################################

    // int arr[5];
    // int n=5;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    
    // cout<< "Printing the array"<< endl;

    // for(int i =0; i<n; i++){
    //     cout<<arr[i]<< " ";
    // }

    //##########################################################################

    
    // int arr[10];
    // int n =10;
    
    // for(int i =0; i<n; i++){
    //     cin>>arr[i];
    // }
    
    // cout<<"Printing after creation"<<" "<<endl;
    // for(int i =0; i<n; i++){
    //     cout<<arr[i] <<" " ;
    // }
    
    // for(int j=0; j<n; j++){
    //     arr[j] = 2*arr[j];
    // }

    // cout<< endl;
    
    // cout<<"Printing after Double"<<" "<< endl;
    // for(int i =0; i<n; i++){
    //     cout<<arr[i] <<" " ;
    // }

//##############################################################################

// Sum in array: 

    // int arr[5];
    // int n=5;

    // cout<< "Enter the input"<<endl;
    // for(int i= 0; i<n; i++) {
    //     cin>>arr[i];x
    // }
    // cout<< endl;
    // int sum =0;
    // for(int i= 0; i<n; i++) {
    //     sum = sum + arr[i];
    // }
    // cout<<"Printing the sum"<<endl;
    // cout<<sum<< endl;



//#########################################################################

// int arr[5]= {2,4,5,6,7};
// int target = 15;
// int n =5;
// bool flag = 0;
// // 0--> not found
// // 1--> found

// for(int i = 0; i<5; i++){
//     if(arr[i]==target){
//         flag = 1;
//         break;
//     }
// }

// if(flag ==1){
//     cout<<"Target is found";
// }
// else{
//     cout<<"Target is not found";
    
// }



//     return 0;
// }

//###############################################################################

// search using function

// void printArray(int arr[], int size){
//     for (int i=0; i<size; i++){
//         cout<< arr[i]<<" ";
//     }
//     cout<<endl;
// }

// // present true
// // absent false;

// bool linearSearch(int arr[], int size, int target){
//     for (int i=0; i<size; i++){
//         if(arr[i] == target)
//         //found
//         return true;
//     }
//     // not found
//     return false;
// }

// int main(){
//     int arr[5]={2,3,4,5,6};
//     int n =5;
//     int target = 4;

//     printArray(arr,n);
//     bool ans = linearSearch(arr, n, target);

//     if(ans == 1){
//         cout<<"Target found"<< endl;
//     }
//     else{
//         cout<<"Target Not found"<<endl;
//     }

//     return 0;
// }

/////##############################################################################


// COUNTING ZEROS AND ONES IN ARRAY:

// void count(int arr[], int size){
//     int zeroCount = 0;
//     int oneCount = 0;
    
//     for(int i=0; i<size; i++){
//         if(arr[i]==0){
//             zeroCount++;
//         }
//         if(arr[i]==1){
//             oneCount++;
//         }
//     }

//     cout<<"ZeroCount: " <<zeroCount <<endl;
//     cout<<"ZeroCount: " <<oneCount <<endl;
// }

// int main(){
//     int arr[]={0,0,0,0,1,0,1,1,0,0,1,0};
//     // one - 4; zero-8
//     int size =12;
//     count(arr, size);

//     return 0;
// }

//#################################################################################

// #include <limits.h>

// int main(){
//     // -2 to the power 31;
//     cout << INT_MIN << endl;
//     cout << INT_MAX<< endl;
// }

//#################################################################################

// FINDIND MIN IN ARRAY:

// int findMinimumArray(int arr[], int size){
//     // ans store variable;
//     int minAns = INT_MAX;
//     for(int i = 0; i < size; i++){
//         if(arr[i]<minAns){
//             minAns = arr[i];
//         }
//     }
//     return minAns;
// }

// int main(){
//     int arr[] = {10, 23, -222, 45, 6 , 8, 245, 11};
//     int size = 10;

//     int ans = findMinimumArray(arr, size);
//     cout<<"Min answer is: "<< ans;

// }

//#################################################################################

// Reverse an array - USINF SWAP
// void reverseArray(int arr[], int size){
//     int left = 0;
//     int right = size - 1;

//     while(left<=right){
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }

//     for(int i = 0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }

// }

// int main(){
//     int arr[6]={10, 20, 30, 40, 50, 60};

//     int size =6;

//     reverseArray(arr, size);
// }

//#################################################################################

// void extremePrint(int arr[], int size){
//     int left = 0;
//     int right = size - 1;

//     while(left<=right){
          
//         if(left == right){
//             cout<<arr[left];
//         }
//         else{
//             cout<<arr[left]<< " ";
//             cout<<arr[right]<<" ";
//         }
//         left++;
//         right--;
//     }

//     // for(int i = 0; i<size; i++){
//     //     cout<<arr[i]<<" ";
//     // }

// }

// int main(){
//     int arr[6]={10, 20, 30, 40, 50, 60};
//     int brr[7]={100, 200, 300, 400, 500, 600, 700};

//     int size =6;
//     int size1 =7;

//     extremePrint(arr, size);
//     cout<<endl;
//     extremePrint(brr, size1);

//     return 0;
// }