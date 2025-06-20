// https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
#include <iostream>
#include <vector>

using namespace std;
class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            vector<int> pos, neg;
            for(int i = 0; i<nums.size(); i++){
                if(nums[i]<0){
                    neg.push_back(nums[i]);
                }
                else{
                    pos.push_back(nums[i]);
                }
            }
            vector<int> ans;
            int i = 0;
            while(i<pos.size()){
                ans.push_back(pos[i]);
                ans.push_back(neg[i]);
                i++;
            }
    
            return ans;
        }
    };