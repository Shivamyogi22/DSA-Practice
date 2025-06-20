#include<iostream>
#include<vector>
using namespace std;

void find(int arr[], int size, int index, int target){
    if(index>=size) return;

    if(arr[index] == target) {
        cout<< index<<" ";
    }

    find(arr, size, index+1, target);
}

void findAndStore(int arr[], int size, int index, int target, vector<int> &ans){
    
    //base case
    if(index >= size) return;

    // processing
    if(arr[index] == target)
        ans.push_back(index);

    // recursive call
    findAndStore(arr, size, index+1, target, ans);

}

int main(){
    int arr[] = {10, 40, 30, 40, 40};
    int size = 5;
    int index= 0;
    int target = 40;

    vector<int> ans;

    // find(arr, size, index, target);
    findAndStore(arr, size, index, target, ans);

    for(int news : ans){
        cout<<news<<" ";
    }


    return 0;
}