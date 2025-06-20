#include<iostream>
#include<string.h>
using namespace std;


// BASICS DONE________
// int main(){
//     char ch[10];
//     cin >> ch;
//     cout<<"Printing the name: "<< ch<< endl;;

//    cout<<"Character at differnt index"<<endl;

//    for(int i = 0; i<10; i++){
//     cout<<"At Index: "<<i <<" "<< ch[i]<< endl;
//    }

//    char nullchar = ch[6];
//    int value = (int) nullchar;

//    cout<<"Prinitng integer value: "<< value<< endl;

//    return 0;
// }

//########################################################################

// cin.getline(ch, 100)----------------------------------------------------
// int main(){
//     char ch[100];

//     cin.getline(ch, 100);
//     cout<< "Printing the value of ch: "<< ch<< endl;

//     return 0;
// }

//################################################################################

//LENGTH OF Ch:--------------------------------------------------------

int findLength(char ch[], int size){
    // int length = 0;
    // for(int i = 0; i<size; i++){
    //     if(ch[i] == '\0'){
    //         break;
    //     }
    //     else{ 
    //         length++;
    //     }
    // }
    // return length;
    int index = 0;
    while(ch[index] != '\0'){
        index++;
    }
    return index;
}

int main(){
    char ch[100];

    cin>> ch;
    // cin.getline(ch, 100);
    int len = findLength(ch, 100);

    cout<<"Length of string is: "<<len<< endl;
    cout<<"Length of string is: "<<strlen(ch)<< endl;
    
    return 0;
}