#include<iostream>
using namespace std;

bool isPalindrome(string s, int start, int end){
    // base case
    if(start >= end){
        return true;
    }

    // rec. call
    if(s[start] != s[end]){
        return false;
    }

    return isPalindrome(s, start+1, end-1);
}


int main(){
    string s = "racecar";
    cout<< isPalindrome(s, 0, s.size()-1);
}