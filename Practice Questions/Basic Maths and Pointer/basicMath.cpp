#include <iostream>
using namespace std;

int slowExponential(int a, int b){
    int ans = 1;
    for(int i = 0; i<b; i++){
        ans = ans*a;
    }

    return ans;
}

int fastExponential(int a, int b){
    int ans = 1;
    while(b>0){
        if(b&1){
            // odd 
            ans = ans*a;
        }
        a = a*a;
        b = b>>1; // Right Shift
    }
    return ans;
}

int main(){
    cout << "Hello world" << endl;
    cout<< slowExponential(5,4)<<endl;
    cout<< fastExponential(5,4)<<endl;

    return 0;

}

