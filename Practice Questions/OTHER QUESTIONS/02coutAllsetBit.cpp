#include <iostream>
using namespace std;

// int countSetBit(int n){
//     int count = 0;

//     while(n>0){
//         int bit = n%2;
//         if(bit==1){
//             count++;
//         }
//         n=n/2; 
//     }

//     return count;
// }

// int main(){
//     int n;
//     cin>>n;

//     int setBitCount = countSetBit(n);
//     cout<< setBitCount<< endl;
// }


//// using bitwise method;

int countSetBit(int n){
    int count = 0;

    while(n){ // if we write n>0 then it means n is n should not be zero; agr n zero hua to code while nhi chlega
        int bit = (n & 1);
        if(bit){  //// similarly yha pr bhi bit ==1 liko mtlb we are saying ki jo parameter pass hoga vo 1 hona chaiye tbhi to if work krega
            count++;
        }
        n = n>>1;
    }
    return count;
}

int main(){
    int n;
    cin>>n;

    int setBitCount = countSetBit(n);
    cout<< setBitCount<< endl;
}

