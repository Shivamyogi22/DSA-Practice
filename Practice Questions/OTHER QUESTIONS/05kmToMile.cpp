#include <iostream>
using namespace std;

float KmToMiles(int distance){
    float _1kmMile = 0.621371;
    float miles = distance*_1kmMile;

    return miles;

}

int main(){
    float km;
    cout<<"Tell me km? \n" << "Enter the Kms: "<< endl;

    cin>> km;

    float answer  = KmToMiles(km);
    cout<< "Answer: "<< answer <<"miles" <<endl;



}