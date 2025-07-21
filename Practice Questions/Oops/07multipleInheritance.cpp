#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Barking.. Bark"<<endl;
    }
};

class Human{
    public:
    string color;

    public:
    void speak(){
        cout<< "Speaking.. speak" <<endl;
    }
};

class Hybrid: public Animal, public Human{
     
};

int main(){
    Hybrid superHuman;

    superHuman.speak();
    superHuman.bark();

    return 0; 
}