#include<iostream>
#include<string.h>
using namespace std;

void convertToUpperCase(char ch[], int n){
    int index = 0;
    while(ch[index] != '\0' ) {
        char currCharacter = ch[index];
        //check if lower case, then convert to Uppar case
        if(currCharacter >= 'a' && currCharacter <='z'){
            ch[index] = currCharacter - 'a' + 'A'; 
        }
        index++;
    }

}
void convertToLowerCase(char ch[], int n){
    int index = 0;
    while(ch[index] != '\0' ) {
        char currCharacter = ch[index];
        //check if Uppar case, then convert to Lower case
        if(currCharacter >= 'A' && currCharacter <='Z'){
            ch[index] = currCharacter - 'A' + 'a'; 
        }
        index++;
    }

}

void replaceCharacter(char ch[], int n){
    int index = 0;

    while(ch[index] != '\0'){
        char curr = ch[index];
        if(curr == '@'){
            ch[index] = ' ';
        }
        index++;
    }
}

int main(){

    char ch[100];

    cin.getline(ch, 100);
    int len = strlen(ch);

    cout<<"Before : " << ch << endl;
    // convertToUpperCase(ch, len);
    // cout<<"Uppar After: \n"<< ch<< endl;
    
    // cout<<"Now Lower: "<< endl;
    
    // convertToLowerCase(ch, len);
    // cout<<"Lower After: \n"<< ch<< endl;
    
    replaceCharacter(ch, len);
    cout<<"After: \n"<< ch<< endl;
    
}