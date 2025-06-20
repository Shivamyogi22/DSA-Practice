#include <iostream>
#include <vector>
using namespace std;


long long int binarySearch(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;

    while(s<=e){
        long long int square = mid*mid;
        
        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            s = mid + 1; 
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int main() {
    int x;
    cin>>x;
    
    int intPart = binarySearch(x);
    double ans =  intPart;
    double increment = 0.1;

    for(int  i = 0; i<=2; i++){
        while((ans+increment)*(ans+increment) <=x){
            ans = ans + increment;
        }
        // ans = ans - increment;
        increment = increment/10;
        
    }
    cout<< ans;
    return 0;
}