#include<iostream>
using namespace std;

void lastOccTR(string &s, char x, int i, int &ans){
    // base case
    if(i>s.size()){
        return;
    }
    
    //ek case relation
    if(s[i] == x){
        ans = i; 
    }
    
    // RE
    lastOccTR(s, x, i+1, ans);
}

int main(){
    string s;
    cin >>s;

    char x;
    cin>>x;

    int ans = -1;
    lastOccTR(s, x, 0, ans);

    cout<< ans <<endl;

}