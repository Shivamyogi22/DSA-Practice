#include <iostream>
using namespace std;

// Reference variable concept: 
// int main(){
//     int n=5;
//     int &k =n;
//     int &c=n;

//     cout<<"n: "<<n<<endl;
//     cout<<"k: "<<k<<endl;
//     cout<<"c: "<<c<<endl;
    
//     k++;

//     cout<<"n: "<<n<<endl;
//     cout<<"k: "<<k<<endl;
//     cout<<"c: "<<c<<endl;

// }

//#################################################################################

// Call by reference:- 

// void incremenetBy1(int &n){
//     n++;
//     return n;
// }

// int main(){ 
//     int n =6;
//     incremenetBy1(n);

//     cout<< "n: "<< n <<endl;
// }


//#################################################################################

// FIND UNIQUE ELEMENET: 
// int getUnique(int arr[], int size){
//     int ans = 0;
//     for(int i=0; i<size; i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }

// int main(){
//     int arr[]= {2, 10,11,19,20,10,2,19,7,5,9,7,5,9,20};
//     int n =15;

//     int finalAns = getUnique(arr, n);
//     cout<<"Final Answer: "<< finalAns;
// }


//#################################################################################

// Prinitng pairs of elements from given array 

// int main(){
//     int arr[] = {10,20,30};
//     int n =3;

//     for(int i =0; i<n;i++){
//         for(int j=i; j<n;j++){
//             cout<<"("<<arr[i]<<','<<arr[j]<<")"<< endl;
//         }
//     }
// }

//#################################################################################

// SORTING OF 0 and 1;

// void sortZeroOne(int arr[], int n){
//     int zeroCount = 0;
//     int oneCount = 0;

//     // Step A: Count 0 and 1
//     for(int i =0; i<n; i++){
//         if(arr[i]==0){
//             zeroCount++;
//         }
//         if(arr[i]==1){
//             oneCount++;
//         }
//     }

//     // Step B: Place all zeros first
//     int i;
//     for(i =0; i<zeroCount; i++){
//         arr[i]=0;
//     }
 
//     for(int j =i; j<n; j++){
//         arr[j]=1;
//     }

//     // EASY WAY:
//     // int index = 0;
//     // while(zeroCount--){
//     //     arr[index] = 0;
//     //     index++;
//     // }
//     // while(zeroCount--){
//     //     arr[index]=0;
//     //     index--;
//     // }
// }

// int main(){
//     int arr[]= {0,1,0,1,0,1,0,1,0,1,0,1,0,1};
//     int n=14;
//     // 7 zero, 7 one
//     sortZeroOne(arr, n);

//     // printing the array 
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<",";
//     }
// }

//################################################################################

//Q- SHIFITNG ELEMENT TO NEXT BLOCK

// void shiftArray(int arr[], int n){
//     //Step 1
//     int temp = arr[n-1];
    
//     //Step-2 shift arr[i]=arr[i-1]
//     for(int i=n-1; i>=1; i--){
//         arr[i]=arr[i-1];
//     }

//     //Step-3 Copy temp into 0th index
//     arr[0] = temp;

// }

// int main(){
//     int arr[]={10, 20, 30, 40, 50, 60};
//     int n=6;

//     shiftArray(arr, n);
    
//     // print 
//     for(int i=0; i<n; i++){
//         cout<< arr[i]<<" ";
//     }

// }

//################################################################################

// Sorting 0 and 1, using - 2 pointer approch:

void sortZeroOne(int arr[], int n){
    int left = 0;
    int right = n-1;

    while(left<right){
        if(arr[left] == 0){
            left++;
        }
        else if(arr[right]==1){
            right--;
        }
        else {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main(){
    int arr[]= {0,1,0,1,0,1,0,1,0,1,0,1,0,1,1};
    int n=15;
    // 7 zero, 7 one
    sortZeroOne(arr, n);

    // printing the array 
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
}
