#include<iostream>
#include<vector>
using namespace std;

void findSubSequence(string str, string output, int index){
    // baseCase
    if(index >= str.length()){
        // ans jo h vo output string m build ho chuka h
        cout<< output<<endl;
        return;
    }
    char ch = str[index];

    //exclude
    findSubSequence(str, output, index+1);
    // include
    output.push_back(ch); // output string m ch ko include kr do

    // recusiion call kr do ab
    findSubSequence(str, output, index+1);
}

void findSubSequenceAnsVector(string str, string output, int index, vector<string> &ans){
    // baseCase
    if(index >= str.length()){
        // ans jo h vo output string m build ho chuka h
        ans.push_back(output);
        return;
    }
    char ch = str[index];

    //exclude
    findSubSequenceAnsVector(str, output, index+1, ans);
    // include
    output.push_back(ch); // output string m ch ko include kr do

    // recusiion call kr do ab
    findSubSequenceAnsVector(str, output, index+1, ans);
}




int main(){
    string str = "abc";
    string output = "";
    int index = 0;
    
    vector<string> ans;
    
    // findSubSequence(str, output, index);
    findSubSequenceAnsVector(str, output, index, ans);

    for(string newAns : ans){
        cout<<newAns<<endl;
    }
}