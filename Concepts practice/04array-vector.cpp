#include<iostream>
#include<vector>
using namespace std;

// void print(vector <int> v){
//     int size = v.size();
//     for(int i=0; i<size; i++){
//         cout<<v[i]<<endl;
//     }
// }

// int main(){
//     vector <int> v;

//     while(1){
//         int d;
//         cin>>d;
//         v.push_back(d);

//         cout<<"Capacity: "<<v.capacity()<<" and "<<"Size: "<<v.size()<<endl;
//     }

//     // v.push_back(1);
//     // v.push_back(2);
//     // v.push_back(3);

//     // print(v);

// }


//###########################################################################
// HOW TO ACCESS ROW WISE AND COL WISE:

// void printArray(int arr[][4], int row, int col){
//     for(int i = 0; i<row; i++){
//         for(int j =0; j<col; j++){
//             cout<< arr[i][j]<<" ";
//         }
//         cout<< endl;
//     }
// }

// void colWaisePrintArray(int arr[][4], int row, int col){
//     for(int i = 0; i<col; i++){
//         for(int j =0; j<row; j++){
//             cout<< arr[j][i]<<" ";
//         }
//         cout<< endl;
//     }
// }

// int main(){
//     int arr[][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {51,26,37,18},
//     };

//     int row = 3;
//     int col = 4;

//     printArray(arr, row, col);
//     cout<< endl;
//     colWaisePrintArray(arr, row, col);
//     return 0;
// }

//###########################################################################
// int main(){
// int arr[3][3];
// int row =3;
// int col =3;

// for(int i = 0; i<row; i++){
//     for(int j=0; j<col; j++){
//         cout<<"Enter the input for the row: "<<i<<" column: "<<j<<endl;
//         cin>>arr[i][j];
//     }
//     cout<<endl;
// }

// }

//###########################################################################

// Q- Searching target in 2D array: 

// bool findTarget(int arr[][4], int row, int col,int target){
    // for(int i =0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //         if(arr[i][j] == target){
    //             return true;
    //         }
    //     }
    // }
//     return false;
// }

// int main(){
//     int arr[][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {51,26,37,18},
//     };
    
//     int row = 3;
//     int col = 4;
//     int target = 151;

//     if(findTarget(arr, row, col, target)){
//         cout<<"Found target"<< endl; 
//     }
//     else{
//         cout<<"Target not Found"<<endl; 
//     }
    
//     return 0;
// }

//############################################################################

// Finding Max and Min number in 2D array:-

// #include<limits.h>
// int findMax(int arr[][4], int row, int col){
//     int maxAns = INT_MIN;
    
//     for(int i =0; i<row; i++){
//         for(int j=0; j<col; j++){
    
//             if(arr[i][j] > maxAns){
//                 maxAns= arr[i][j] ;
    
//             }
//         }
//     }
    
//     return maxAns;

// }

// int findMin(int arr[][4], int row, int col){
//     int minAns = INT_MAX;
    
//     for(int i =0; i<row; i++){
//         for(int j=0; j<col; j++){
    
//             if(arr[i][j] < minAns){
//                 minAns= arr[i][j] ;
    
//             }
//         }
//     }
    
//     return minAns;

// }

// int main(){
//     int arr[][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {51,26,37,118},
//     };
    
//     int row = 3;
//     int col = 4;
//     int target = 151;

//    cout<<"Prinying the Max. no: "<< findMax(arr, row, col)<<endl;
//    cout<<"Prinying the Min. no: "<< findMin(arr, row, col)<<endl;

//    return 0;
// }


//##########################################################################

// void rowWiseSum(int arr[][4], int row, int col){
   
//     for(int i =0; i<row; i++){
//         int sum=0;
//         for(int j=0; j<col; j++){
//             sum = sum+ arr[i][j];
//         }
//         cout<<"Sum of row "<<i <<" "<<sum<<endl;
//     }

// }
// void colWiseSum(int arr[][4], int row, int col){
   
//     for(int i =0; i<col; i++){
//         int sum=0;
//         for(int j=0; j<row; j++){
//             sum = sum+ arr[j][i];
//         }
//         cout<<"Sum of col "<<i<<" "<<sum<<endl;
//     }

// }


// int main(){
//     int arr[][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {51,26,37,118},
//     };
    
//     int row = 3;
//     int col = 4;
//     int target = 151;

//    rowWiseSum(arr, row, col);
//    cout<<endl;
//    colWiseSum(arr, row, col);

//    return 0;
// }

// Sum of row 0 10
// Sum of row 1 26
// Sum of row 2 232

// Sum of col 0 57
// Sum of col 1 34
// Sum of col 2 47
// Sum of col 3 130

//###########################################################################

// void transpose(int arr[][4], int row, int col){
//     for(int i=0; i<row; i++){
//         for(int j=i; j<col; j++){
//             swap(arr[i][j], arr[j][i]);
//         }
//         cout<<endl;
//     }
// }

// void printArray(int arr[][4], int row, int col){
//     for(int i = 0; i<row; i++){
//         for(int j =0; j<col; j++){
//             cout<< arr[i][j]<<" ";
//         }
//         cout<< endl;
//     }
// }

// int main(){
//     int arr[][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {51,26,37,118},
//         {11,22,53,514},
//     };
    
//     int row = 4;
//     int col = 4;
//     int target = 151;

//     printArray(arr, row, col);

//     transpose(arr, row, col);
//     printArray(arr, row, col);
//    cout<<endl;
   

//    return 0;
// }

// 1 2 3 4 
// 5 6 7 8
// 51 26 37 118
// 11 22 53 514
// ////////////////////////////
// 1 5 51 11
// 2 6 26 22
// 3 7 37 53
// 4 8 118 514


//###########################################################################

// CREATION OF 2-D array

// int main(){
//     vector <vector <int> > arr(5, vector<int>(10, 0));

//     for(int i = 0; i<arr.size(); i++){
//         for(int j = 0; j<arr[i].size(); j++){
//             cout<< arr[i][j]<<" ";
//         }
//         cout <<endl;
//     }

//     return 0;
// }

//############################################################################

// JAGGED ARRAY 

int main(){
    vector< vector <int> > brr;
    vector <int> vec1(10,0);
    vector <int> vec2(5,1);
    vector <int> vec3(9,2);
    vector <int> vec4(8,1);
    vector <int> vec5(20,0);

    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);

    for(int i = 0; i<brr.size(); i++){
        for(int j = 0; j<brr[i].size(); j++){
            cout<< brr[i][j]<<" ";
        }
        cout <<endl;
    }

    return 0;
}