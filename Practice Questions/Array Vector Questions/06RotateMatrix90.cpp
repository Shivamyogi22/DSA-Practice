//https://leetcode.com/problems/rotate-image/submissions/1619506646/
#include<iostream>
#include<vector>
#include<algorithm> 

using namespace std;

class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
    
            int n = matrix.size();
    
            // transpose
            for(int i = 0; i<n; i++){
                for(int j=i; j<n; j++){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
    
            // Reverse the rows of 2D matrix (0 se (n-1))
            for(int i = 0; i<n; i++){
                // hr row ko reverse
                reverse(matrix[i].begin(), matrix[i].end());
            }
    
        }
    };