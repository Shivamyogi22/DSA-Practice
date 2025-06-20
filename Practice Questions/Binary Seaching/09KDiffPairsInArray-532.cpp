// https://leetcode.com/problems/k-diff-pairs-in-an-array/

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    // int findPairs(vector<int>& nums, int k) {
    //     sort(nums.begin(), nums.end());
    //     set<pair <int, int>> count;
    //     int i=0, j=1;
    //     // int count  =0;
        
    //     while(j<nums.size()){
    //         int diff = nums[j] - nums[i];
    //         if(diff == k){
    //             // cout<<nums[i]<<" "<<nums[j]<< endl;
    //             // count++;
    //             count.insert({nums[i], nums[j]});
    //             i++; j++;
    //         }
    //         else if(diff > k){
    //             i++;
    //         }
    //         else{
    //             j++;
    //         }

    //         if(i==j){
    //             j++;
    //         }
    //     }

    // // return count;
    // return count.size();
    // }

// }


// METHOD - 2

int binarySearch(vector<int>& nums, int s, int x) {
    int e = nums.size() - 1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(nums[mid] == x ){
            return mid;
        }
        else if(nums[mid] < x){
            s = mid +1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}

int findPairs(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    set<pair <int, int>> ans;

    for(int i = 0; i<nums.size();i++){
        // a[i];
        // search -> a[i] + k[right subarray];
        if(binarySearch(nums, i+1, nums[i]+k) != -1){

            ans.insert({nums[i], nums[i]+k}); 
        }
    }

    return ans.size();
}

};
