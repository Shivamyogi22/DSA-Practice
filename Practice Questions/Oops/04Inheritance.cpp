#include <iostream>
using namespace std;

class Human{
    public:
        int height;
        int age;
        int weight;

    public:
        int getAge(){
            return this->age;
        }
        void setWeight(int w){
            this->weight = w;
        }
};

class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male is Sleeping"<< endl;
    }
};

int main(){
    Male first1;
    cout<<"Starting...."<<endl;
    cout<< first1.age <<endl;
    cout<< first1.weight <<endl;
    cout<< first1.color <<endl;
    first1.sleep();
    first1.setWeight(94);
    cout<< first1.weight <<endl;
    cout<<"Yes, Inhertance is working"<<endl;
    return 0;
}