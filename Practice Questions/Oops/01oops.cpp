#include<iostream>
using namespace std;

class Student{

private: 
    string gf;

public:    
    int id;
    int age;
    string name;
    int nos;
    bool present;

    // Ctor : Default constructor-> assign garbage value
    Student(){
        cout<<"Student Ctor called. "<<endl;
    }
    Student(int _id, int _age, bool _present, string _name, int _nos, string _gfname)
    {
        id = _id;
        age = _age;
        present = _present;
        name = _name;
        nos = _nos;
        gf = _gfname; 
        cout<<"Student paremeterized Ctor called. "<<endl;
    }
    Student(int _id, int _age, bool _present, string _name, int _nos)
    {
        id = _id;
        age = _age;
        present = _present;
        name = _name;
        nos = _nos;
        cout<<"Student paremeterized Ctor without GF called. "<<endl;
    }

    Student(Student &srcObj){
        cout<<"I am copy Constructor \n";
        this->name = srcObj.name;
        this->age = srcObj.age;
        this->id = srcObj.id;
    }
    

    void study(){ 
        cout<<"Studing"<<endl;
    }
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
    void bunk(){
        cout<<"Bunking"<<endl;
    }
    void getInfo(){
        cout<<"name: " <<name<<endl;
        cout<<"id: " <<id <<endl;
    }

private:
    void gfChatting(){
        cout<<"Chatting"<<endl;
    }    
};
class Childern{
    int id; // size of int 4- padding of 28B
    string st; // size of string - 32B
    string st1; // size of string - 32B
};

int main(){
    // cout<<sizeof(Childern);
    // Student s1;
    Student s1(1, 12, 1, "Bhalu" , 1, "Morni");
    Student s2 = s1;

    s2.getInfo();

    // Student s2(1, 12, 1, "Bhalu" , 1, "Morni");
    
    // cout <<s2.name<<endl;
    // cout <<s2.id <<endl;
    
    // Student s3(4, 43, 0, "Ramu" , 1);
    // Student *s4 =  new Student(4, 43, 0, "Pintu" , 1);
    // cout <<s4->name <<endl;
    // cout <<(*s4).name <<endl;

    // cout<<s1.age;
    
    // Student s1;
    // s1.name = "Yogi";
    // s1.age = 25;
    // s1.id = 0101;
    // s1.nos= 12;
    // s1.present = 0;

    // Student s2;
    // s2.name = "Pinsukh";
    // s2.age = 5;
    // s2.id = 007;
    // s2.nos= 2;
    // s2.present = 1;

    return 0;
}