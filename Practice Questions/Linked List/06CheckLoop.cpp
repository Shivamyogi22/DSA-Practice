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

int getLength(Node*head){
    Node*temp = head;
    int length = 0;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }

    return length;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    int length = getLength(head);
    
    if(position == length + 1){
        insertAtHead(head, tail, data);
    }
    else if(position > length){
        insertAtTail(head, tail, data);
    }
    else{
        //insert at middle
        //1- Create new node
        Node* newNode = new Node(data);
        //2-> Traverse prev, curr to position
        Node* prev = NULL;
        Node* curr = head;

        while(position != 1){
            prev = curr;
            curr =  curr -> next;
            position--;
        }

        //3-> Attach prev tp new node:
        prev -> next = newNode;
        //4-> Attach newNode to curr:
        newNode -> next = curr;
    }
}

bool checkLoop(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast -> next;
            slow = slow -> next;
        }

        //check for loop;
        if(fast == slow){
            return true;
        }
    }
    return false;
}

int main(){
    // Node a; // creation of node -> STATIC Allocation
    
    Node * head = NULL;
    Node * tail = NULL;
    
    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 90);
    
    cout<<"Original LL:\n";
    printLL(head);
    cout<<endl;
    
    // Insert At Position
    insertAtPosition(head, tail, 450, -1);
    cout<<"\nNew LL:\n";
    printLL(head);

   
    return 0;
     
}