#include<iostream>
using namespace std;

void solve(int *arr, int size){
    cout<<"Inside Solve-> arr: " << arr << endl;
    cout<<"Inside Solve-> &arr: "<< &arr <<endl;
}

int main(){
    int arr[5] = {1,2,3,4,5,};
    // int *ptr = &arr;
    // int (*ptr)[5] = &arr;
    
    solve(arr, 5);
    
    cout<<"Inside main-> arr: " << arr << endl;
    cout<<"Inside main-> &arr:  "<< &arr <<endl;
    
    return 0;
}
// OUTPUT:------ 
// Inside Solve-> arr: 0x6ec2bffb90
// Inside Solve-> &arr: 0x6ec2bffb70
// Inside main-> arr: 0x6ec2bffb90
// Inside main-> &arr:  0x6ec2bffb90