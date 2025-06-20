#include<iostream>
#include<algorithm>
using namespace std;

// void printingIndexString(string name){
//     int index = 0;
//     while(name[index] != '\0'){
//         cout<<"Index: "<<index<<" Character: "<<name[index]<<endl;
//         index++;
//     }
// }


// int main(){
//     string name;
//     cin>>name;

//     cout<<"Priting Name:"<< name<<endl;
//     // cout<<"Priting First Character :"<< name[0]<<endl;

//     printingIndexString(name);

// }

// #########################################################################

int main(){
    // string  name;
    // cin>>name;

    // empty string
    string temp = "";

    // cout<<"Lenght of the string:- "<<name.length()<<endl;
    // cout<<"String is empty or not:- "<<temp.empty()<<endl;

    // cout<<"Character at position 0 is: "<< name.at(0)<<endl;
    // cout<<"Front character of string is: "<< name.front()<<endl;
    // cout<<"Back character: "<< name.back()<<endl;

    // string str1 = "Shivam";
    // string str2 = "Yogi";

    // cout<<"Before Appending: "<<endl;
    // cout<< str1<<endl;
    // cout<< str2<<endl;

    // // append
    // str1.append(str2);

    // cout<<"After Appending: "<<endl;
    // cout<<str1<<endl; 


    // string desc = "This is a car";
    // desc.erase(4,3);
    // cout<<desc<<endl;

    // string name = "Shivam yogi";
    // string middle = "Kumar";
    // name.insert(7, middle);
    // cout<<"Printing name: "<<name<<endl;

    // string str1 = "Yaar tera super star desi kalakar";
    // string str2 = "star";
    // if(str1.find(str2) == string::npos){
    //     // not found
    //     cout<<"Not Found"<<endl;
    // }
    // else{
    //     cout<<"Found"<<endl;
    // }


    // string str1 = "Shivam";
    // string str2 = "shivam";
    // if(str1.compare(str2) == 0){
    //     cout<<"Matching"<<endl;
    // }
    // else{
    //     cout<<"Not matching"<<endl;
    // }
    

    string desc = "This is a car, big daddy of All SUVs";
    cout<< desc.substr(19, 5);

}