#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        // double cgpa;
        double* cgpaPtr;
        string subject;

        Student(string name, double cgpa, string subject){
            this->name =  name;
            // this->cgpa = cgpa;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
            this->subject = subject;

        }

        void getInfo(){
            cout<<"Name: "<<name<< endl;
            // cout<<"CGPA: "<<cgpa<< endl;
            cout<<"CGPA: "<<*cgpaPtr<< endl;
            cout<<"Subject: "<<subject<< endl;
        }
};

int main(){
    Student s1("Roman Singh", 8.9, "English");
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
    return 0;

}