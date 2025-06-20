#include<iostream>
#include<vector>
using namespace std;

void printSubArray_componet(vector<int> &nums, int s, int e){
    // base case
    if(e == nums.size()) return;

    // 1 case ka soln
    // loop lga lo
    for(int i=s; i<=e; i++ ){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    // Recusion baaki k case k liye
    printSubArray_componet(nums, s, e+1);
}

void printSubArray(vector<int> &nums, int s, int e){
    for(int s = 0; s < nums.size(); s++){
        int e = s; // end fix kr liya h bs start change hoga
        printSubArray_componet(nums, s, e);
    }
}

int main(){
    vector<int> nums{1,2,3,4,5};
    printSubArray(nums, 0, 0);

    return 0;
}