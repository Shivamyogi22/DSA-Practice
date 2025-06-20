#include<iostream>
#include<vector>
using namespace std;

void printStringChar(string s, int index, char ch){
    if(index >= s.length()){
        return ;
    }
    if(s[index] == ch) 
        cout<< index;

    printStringChar(s, index+1, ch);
}

void storeInVector(string s, int index, char ch, vector<int> &store){
    if(index >= s.length()){
        return ;
    }
    if(s[index] == ch) 
        store.push_back(index);

    storeInVector(s, index+1, ch, store);


}

int main(){
    string s = "Babbar";
    int index = 0;
    char ch = 'a';
    vector <int> store; 

    // printStringChar(s, index, ch);
    storeInVector(s, index+1, ch, store);

    for(auto newStore: store){
        cout<< newStore;
    }

    return 0;
    
}