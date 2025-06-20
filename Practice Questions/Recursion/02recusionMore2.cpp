#include<iostream>
#include<vector>
using namespace std;

void printDigits(int num){
    //base case
    if(num == 0) return;

    // processing
    int digit = num % 10;

    // update
    num = num/10;

    printDigits(num);

    cout<< digit;
}

void printDigitsUsingVector(int num, vector<int> &ans){
    //base case
    if(num == 0) return;

    // processing
    int digit = num % 10;

    // update
    num = num/10;

    printDigitsUsingVector(num, ans);

    ans.push_back(digit);
}


int main(){
    int num = 4217;
    vector<int> ans;

    // printDigits(num);

    printDigitsUsingVector(num, ans);
    for(int newAns: ans){
        cout<<newAns;
    }
}