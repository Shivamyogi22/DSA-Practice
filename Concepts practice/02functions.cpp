#include <iostream>
#include<math.h>
using namespace std;

// printing maximum number

// void printMax(int a, int b , int c){
     
//     if(a>b && a>c ){
//       cout<< a << " is maximum" << endl;
//     } 
//     else if(b>a && b>c){
//         cout<< b << " is maximum" << endl;
//     }
//     else{
//         cout<< c <<" is maximum"<<endl;
//     }
// }

// M#2
//  void printMax(int num1, int num2, int num3){
//     int answer = max(num1,num2);
//     int finalAnswer= max(answer, num3);
//     cout<< "Final ans is: "<< finalAnswer << endl;

//  }

// int main(){
//     int a, b,c;
//     cin>>a >>b>>c;
//     printMax(a,b,c);
// }


//######################################################################

// Printing couting:

// void coutningPrint(int n){
//     for(int i =1; i<=n; i++){
//         cout<< i<<endl;
//     }
// }

// int main(){
//     int n;
//     cout << "Enter the last number n: "<< endl;
//     cin>>n;
//     coutningPrint(n);

// }

//##########################################################################

// Even Odd:

// void evenOdd(int n){
//         if(n%2 == 0){
//             cout<< "Number is Even"<< endl;
//         }
//         else{
//             cout<<"Number is odd"<<endl;
//         }
// }

// int main(){
//     int num;
//     cin>>num;
//     evenOdd(num);
// }

// Method-2 - Using bool 
// bool checkEven(int n){
//     if(n%2==0){
//         return true;
//     }
//     return false;
// }

// int main(){
//     int n;
//     cin>> n;
    
//     bool isEven = checkEven(n);
//     if(isEven){
//         cout<<"Number is Even";
//     }
//     else{
//         cout<<"Number is Odd";
//     }
// }

// Method-3 - EVEN ODD CHECKER- Bitwise method:
// bool checkEven(int n){
//     if((n&1)==0){
//         return true;
//     }
//     return false;
// }

// int main(){
//     int n;
//     cin>> n;
    
//     bool isEven = checkEven(n);
//     if(isEven){
//         cout<<"Number is Even";
//     }
//     else{
//         cout<<"Number is Odd";
//     }
// }



// ##########################################################################

// SUM upto N

// void findSumN(int n){
//     int sum = 0;
//     for(int i = 1; i<=n; i++){
//         sum=sum+i;
//     }
//     cout<< "Final Sum: "<<sum;  
// }

// int main(){
//     int m;
//     cin>>m;
//     findSumN(m);
// }

// //###########################################################################

// // SUM OF EVEN 
// void findSumEvenN(int n){
//     int sum = 0;
//     for(int i = 2; i<=n; i=i+2){
//         sum=sum+i;
//     }
//     cout<< "Final Sum: "<<sum;  
// }

// int main(){
//     int m;
//     cin>>m;
//     findSumEvenN(m);
// }

// //###########################################################################

// // Factorial
// void factorial(int n){
//     int fact = 1;
//     for(int i = n; i>1; i--){
//         fact = fact*i;
//     }
//     cout<< "Factorial of " << n <<" : " <<fact;  
// }

// int main(){
//     int m;
//     cin>>m;
//     factorial(m);
// }

// //###########################################################################

// prime number printer

// void primeNumers(int n){
//     for(int j = 2; j<=n; j++){
//         bool isPrime = true;
    
//         for(int i = 2; i < j; i++){
//             if(j%i == 0 ){
//                 isPrime = false;
//                 break;;
//             }
//         }
//         if(isPrime){
//             cout<< j << " ";
//         }
//     }
// }

// int main(){
//     int m;
//     cin>>m;
//     primeNumers(m);
// }

/// method-2 // prime number printer

// bool checkPrime(int n){
//     for(int i =2; i<n; i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;

// }
// int main(){
//     int n;
//     cin>>n;

//     for(int i =2; i<n; i++){
//         bool isPrime = checkPrime(i);
//         if(isPrime){
//             cout<<i<<",";
//         }
//     }
// }
//##############################################################################

// Check prime:

// bool checkPrime(int n){
//     for(int i=2; i<sqrt(n); i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){ 
//     int n;
//     cout<< "Enter the number n: \n";
//     cin>>n;

//     bool isPrime = checkPrime(n);
//     if(isPrime){
//         cout<<"Give Number is Prime \n";
//     }
//     else{
//         cout<<"Given Number is not a prime \n";
//     }
// }

// //###########################################################################


//###########################################################################