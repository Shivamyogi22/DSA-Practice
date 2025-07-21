#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking.... "<<endl;
    }
    void barking(){
        cout<<"Barking barking"<< endl;
    }
};

class Dog: public Animal{
    
};
class GermanShepherd : public Dog{

};

int main(){
   Dog d;
   d.speak();
   cout<< d.age <<endl;

   GermanShepherd g;
   g.barking();

   return 0;
}