//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/


#include<iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int index = 0;
        
        while(index < s.length()){
            //same
            //ans ka rightmost char and string s ka leftmost char
            if(ans.length() > 0 && ans[ans.length()-1] == s[index]){
                ans.pop_back();
            }
            else{
                //push
                ans.push_back(s[index]);
            }
                index++;
        }

        return ans;
    }

// Previous approch 24
    // string removeDuplicates(string s) {
        
    //     int i = 1;
    //     while( i < s.length() ){
    //         if(s[i] == s[i-1]){

    //             s.erase(i-1, 2);

    //             if(i > 1){
    //                 i--;
    //             }

    //         }
    //         else{
    //             i++;
    //         }
    //     }

    //    return s; 

    // }
};