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

void printLL(Node* head){
    Node *temp = head;
    while (temp != NULL){
        cout<< temp->data<< "->";
        temp = temp-> next;
    }
}

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        //empty LL:
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }else{
        // Create a New Node
        Node* newNode =  new Node(data);
        // Attach this newNode to(-->) head node
        newNode -> next = head;
        // update the head;
        head = newNode;
    }
}
void insertAtTail(Node* &head, Node* &tail, int data){
    if(head == NULL){
        //empty LL:
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }else{
        // Create a New Node
        Node* newNode =  new Node(data);
        // Attach this newNode to(-->) head node
        tail-> next = newNode;
        // update the head;
        tail = newNode;
    }
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
    Node * tail = fifth;
    cout<<"Original LL:\n";
    printLL(head);
    
    // Insert At Head
    insertAtHead(head, tail, 450);
    
    cout<<"\nNew LL:\n";
    printLL(head);

    // Insert at Tail
    insertAtTail(head, tail, 930);
    cout<<"\nTail Insertion:-\n";
    printLL(head); 
   
    return 0;
     
}