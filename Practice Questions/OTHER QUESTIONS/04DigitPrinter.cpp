#include <iostream>
using namespace std;

void printAllDigits(int n){

    while(n>0){
        int onesPlaceDigit = n % 10;
        cout<<"Digit: "<< onesPlaceDigit<< endl;
        n = n/10;
    }

}

int main(){
    int n;

    cout<< "Enter the number to see its digits "<<endl;
    cin>>n;

    printAllDigits(n);
}