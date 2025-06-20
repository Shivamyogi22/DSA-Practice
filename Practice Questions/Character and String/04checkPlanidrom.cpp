#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char ch[], int n){
    // n->length of string
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(ch[s] == ch[e]){
            s++;
            e--;
        }
        else{
            //char not matching
            return false;
        }
    }

    return true;
}

int main(){

    char ch[100];

    cin.getline(ch, 100);
    int len = strlen(ch);

    bool isPalindrom = checkPalindrome(ch, len);
    
    if(isPalindrom){
        cout<<"Valid Palindrome"<<endl;
    }
    else{
        cout<<"Invalid Palindrome"<<endl;
    }
    

}