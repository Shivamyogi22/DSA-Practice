#include <iostream>
#include <vector>
using namespace std;


class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            // int row = matrix.size();
            // int col = matrix[0].size();
    
            // int start = 0;
            // int end = row*col - 1;
    
            // int mid = start + (end-start)/2;
    
            // while(start <= end){
    
            //     int element = matrix[mid/col][mid % col];
            //     if(element == target){
            //         return 1;
            //     }
            //     if(element < target){
            //         start = mid + 1;
            //     }
            //     else{
            //         end = mid - 1;
            //     }
            //     mid = start + (end-start)/2;
            // }
            // return 0;
    
    // Same Method another way:
            int row = matrix.size();
            int col = matrix[0].size();
    
            int n = row*col;
            int s = 0;
            int e = n-1;
            int mid = s+(e-s)/2;
    
            while(s <= e){
                int rowIndex = mid/col;
                int colIndex = mid%col;
    
                int currNumber = matrix[rowIndex][colIndex];
    
                if(currNumber == target){
                    return true;
                }
                else if(target > currNumber){
                    // right
                    s = mid + 1;
                }
                else if(target < currNumber){
                    //left
                    e = mid - 1;
                }
    
                // update mid
                mid = s + (e - s )/2;
            }
    
            return false;
        }
    };