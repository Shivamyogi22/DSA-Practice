#include <iostream>
using namespace std;

class Human{
    
    public:
    void speak(){
        cout<<"Speaking.... "<<endl;
    }
};

class Male: public Human{
    public:
    void loyal(){
        cout<<"Loyalty.... "<<endl;
    }
};
class Female: public Human{
    public:
    void cheat(){
        cout<<"cheating.... "<<endl;
    }
};

int main(){
    Male m1;
    Female f1;   

    m1.speak();
    m1.loyal();
    f1.speak();
    f1.cheat();

   return 0;
}