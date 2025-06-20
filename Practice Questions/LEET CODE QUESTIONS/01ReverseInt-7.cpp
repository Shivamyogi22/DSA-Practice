#include<iostream>
using namespace std;

int reverse(int n){
    int ans = 0;
    while( n != 0){
        int digits = n%10;
        if((ans > INT_MAX/10)||(ans < INT_MIN/10)){
            return 0;
        }
        ans = (ans*10) + digits;
        n = n/10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int answer = reverse(n);
    cout<< answer;
}

// https://leetcode.com/problems/reverse-integer/?envType=problem-list-v2&envId=oscjcro2