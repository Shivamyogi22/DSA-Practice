#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int height;

    public:
        int getAge(){
            return this->age;
        }
};

int main(){
    Student first;
    cout<<"Sb shi chl rha h"<<endl;

    return 0;
}