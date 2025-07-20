#include <iostream>
using namespace std;

int x = 2; // GLOBAL VARIABLE

void fun(){
    int x = 14;
    cout <<"Fun wla x: "<<x << endl;
    cout <<"Fun m global x: "<< ::x <<endl; 
}

int main(){
    :: x = 4; // global x
    int x = 20; // Local to main() funcn
    
    cout << x << endl; 
    cout << :: x <<endl;  // accessing global variable
    
    {
        int x = 60;
        cout <<"Printing local X scope 2: "<< x << endl;
        cout<<"Printing Globle x: " << :: x <<endl;    // accessing global variable
    }
    
    fun();

    return 0;
}