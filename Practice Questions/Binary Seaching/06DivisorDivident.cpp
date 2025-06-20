#include <iostream>
using namespace std;

int getQuotient(int divisor, int divident){
    int s = 0;
    int e = divident;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(mid*divisor == divident){
            return mid;
        }
        if(mid*divisor < divident){
            // ans ko store kro
            ans = mid; 
            // go to right
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

double precison(int divisor, int divident, int intPart){
    double ans1 =  intPart;
    double increment = 0.1;

    for(int  i = 0; i<=2; i++){
        while((ans1+increment)*(divisor) <= divident){
            ans1 = ans1 + increment;
        }
        // ans = ans - increment;
        increment = increment/10;
        
    }
    // cout<< ans1;
    return ans1;
}

int main(){
    int divisor = 7;
    int divident = 22;
    
   
    int intQuotient = getQuotient(abs(divisor), abs(divident));
    double ans = precison(abs(divisor), abs(divident), intQuotient);
    
    // int ans = getQuotient(divisor, divident);
    
    if((divisor > 0 && divident < 0) || ( divisor < 0 && divident > 0)){
        ans = 0 -ans;
    }

    cout<< "Final Answer is: " <<ans<< endl;

    return 0;
}
