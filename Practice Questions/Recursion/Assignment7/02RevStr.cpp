#include<iostream>
using namespace std;

void reverse(string &s, int start, int end){
    if(start >= end){
        return;
    }
    swap(s[start], s[end]);

    reverse(s, start+1, end-1);
}

int main(){
    string s ="Shivam";
    int end = s.size() -1;
    
    reverse(s, 0, end);
    cout<< s;


}