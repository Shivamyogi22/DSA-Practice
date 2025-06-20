// #include<iostream>
// using namespace std;

// void printPermutation(string str, int index){
//     // base case
//     if(index >= str.length()){
//         cout << str << " ";
//         return;
//     }

//     //exclude
//     for(int j = index; j<str.length(); j++){
//         swap(str[index], str[j]);

//         // Recursion bhaiya kr do kam
//         printPermutation(str, index+1);
//     }
// }

// int main(){
//     string str = "ab";
//     int i = 0;
//     printPermutation(str, i);
// }

#include<iostream>
using namespace std;

void printPermutation(string &str, int index){
    // base case
    if(index >= str.length()){
        cout << str << " ";
        return;
    }

    //exclude
    for(int j = index; j<str.length(); j++){
        swap(str[index], str[j]);

        // Recursion bhaiya kr do kam
        printPermutation(str, index+1);

        //Backtracking
        swap(str[index], str[j]);
    }
}

int main(){
    string str = "abc";
    int i = 0;
    printPermutation(str, i);
}