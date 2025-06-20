#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &arr){
    for(int i =0; i< arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main(){ 
    vector<int> arr={4,5,1,2,3}; 
    sort(arr.begin(), arr.end());

    print(arr);

    return 0;
}