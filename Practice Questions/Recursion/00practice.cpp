#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    int finalAns = n*factorial(n-1);
    return finalAns;
}
void print(int n){
    // basecase
    if(n==1){
        cout<<1<<" ";
        return;
    }
    cout<< n << " " ;
    print(n-1);
}

int pow(int n){
    // base case
    if(n==0){
        return 1;
    }
    int ans = 2* pow(n-1);

    return ans;
}

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
  
    int ans =  fib(n-1) + fib(n-2);

    return ans;
}

int sum(int n){
    // base case
    if(n == 1){
        return 1;
    }

    int ans = n + sum(n-1);
    return ans;
}

int main(){ 
    print(9);
    cout<<endl;
    cout<< factorial(5)<< endl;
    cout<<pow(8)<<endl;
    
    cout<<fib(8)<<endl;
    cout<<sum(8)<<endl;


    return 0;
}