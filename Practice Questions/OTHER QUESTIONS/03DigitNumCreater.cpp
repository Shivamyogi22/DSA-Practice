#include <iostream>
using namespace std;

int createNumberUsingDigits(int numberOfDigits){
    int num = 0;
    for(int i = 0; i< numberOfDigits; i++){
        cout<<"Enter Digits number: "<< i+1<<endl;
        int digit;
        cin>>digit;

        num = num*10 + digit;
        cout<< "Number crerated so far: "<< num << endl;
    }

    return num;
}

int main(){
    int numberOfDigits;
    cin>> numberOfDigits;

    int num = createNumberUsingDigits(numberOfDigits);
    cout<< num;
}