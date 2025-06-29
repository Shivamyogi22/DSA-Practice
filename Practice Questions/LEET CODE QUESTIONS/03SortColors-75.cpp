//https://leetcode.com/problems/sort-colors/description/
#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int n = nums.size();
            int index = 0;
            int left = 0;
            int right = n-1;
    
            while(index <= right){
                if(nums[index] ==0){
                    swap(nums[index], nums[left]);
                    left++;
                    index++;
                }
                else if(nums[index] == 2){
                    swap(nums[index], nums[right]);
                    right--;
                    //catch will be index++ nhi krna
                }
                else{
                    index++;
                }
            }
        }
    };