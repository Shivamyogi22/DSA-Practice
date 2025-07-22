#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
     
    Node(){ // default constructor
        cout<<"I am inside default constuctor"<<endl;
        this->next = NULL;
    }
    Node(int data){
        // cout<<"Paramertize constructor called:"<<endl;
        this->data = data;
        this->next = NULL;
    }

};

void print(Node* head){
    Node *temp = head;
    while (temp != NULL){
        cout<< temp->data<< "->";
        temp = temp-> next;
    }
}
int getLength(Node*head){
    Node *temp = head;
    int length = 0;
    while (temp != NULL){
        length++;
        temp = temp-> next;
    }

    return length;
}

int main(){
    // Node a; // creation of node -> STATIC Allocation

    Node *first = new Node(10); // Dynamic
    Node *second = new Node(20); // Dynamic
    Node *third = new Node(30); // Dynamic
    Node *fourth = new Node(40); // Dynamic
    Node *fifth = new Node(50); // Dynamic


    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL; 

    Node * head = first;
    cout<< "Printing LL: \n";
    print(head);

    cout<<"\nLength of given LL is:- "<< getLength(head);


    return 0;
     
}