#include<iostream>
#include<vector>
using namespace std;

void printArray(int arr[], int size, int index){
    // basecase
    if(index >= size){
        return;
    }

    //processing
    cout<< arr[index]<<" ";
    // Recursive call: 
    printArray(arr, size, index+1);
    // cout<< arr[index]<<" ";
}

int searchArray(int arr[], int size, int target, int index){
    // baseCase
    if(index >= size) return false;

    if(arr[index] == target) return true;

    // recursive call
    bool aageKaAns =  searchArray(arr, size, target, index+1);

    return aageKaAns;

}

void findMin(int arr[], int size, int index, int &mini){
    // base case
    if(index >=size){
        return;
    }
    // processing
    mini = min(mini, arr[index]);
    
    // recursive call
    findMin(arr, size, index+1, mini);
}

void solve(int arr[], int size, int index, vector<int> &v){

    if(index>=size) return;

    if(arr[index] % 2 == 0)  v.push_back(arr[index]);

    solve(arr, size, index+1, v);
   
}

void update(int arr[], int size, int index){
    if(index >= size) return;
    
    arr[index] = 2*arr[index];
    update( arr, size, index+1);

    
}

int findInArray(int arr[], int size, int index, int target){
    if(index >= size) return -1;
    
    if(arr[index] == target){
        return index;
    }

    int ans = findInArray(arr, size, index+1, target);

    return ans;

}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index= 0;
    int target = 40 ;
    int mini = INT_MAX;
    vector<int> v;
    // vector<int> v1;


    // printArray(arr, size, index);

    // cout << searchArray(arr, size, target, index);

    // findMin(arr, size, index, mini);
    // cout << "Minimum number in array : " << mini<<endl;

    // solve(arr, size, index, v);
    // for(auto num: v){
    //     cout<< num << " ";
    // }
    
    // update(arr, size, index);
    // for(int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }

    cout<<findInArray(arr, size, index, target);
    
    return 0;
}