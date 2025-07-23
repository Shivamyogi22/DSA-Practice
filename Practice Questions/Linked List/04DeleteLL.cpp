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
    ~Node(){
        cout<<"Destructor is called for deleting this: "<<this-> data <<endl;
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

void deleteNode(Node* &head, Node* &tail, int position){
    int length = getLength(head);

    //empty list
    if(head == NULL){
        cout<<"Cannot delete, because LL is empty"<<endl;
    }

    // Single Element
    if(head == tail){
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
        return;
    }

    // Delete from head
    if(position == 1){
        // first node ko delete krna h
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp; // drestructor is called
 
    }
    else if(position == length){
        // Last node ko delete kr do
        Node* prev = head;
        while(prev-> next != tail){
            prev = prev-> next;
        }
        // prev node ka link ab null ko pt krega
        prev-> next = NULL;

        // node ko uda do
        delete tail;
        // tail ko update krdo
        tail = prev;

    }
    else{
        // Middle se delete krdo
        Node* prev = NULL;
        Node* curr = head;
        while(position != 1){
            position--;
            prev = curr;
            curr = curr-> next;
        }
        // step2-> prev k next m curr ka next add kro
        prev -> next = curr -> next;
        
        // Step-3 -> Node Isolate krdo
        curr -> next = NULL;

        // Delete krdo
        delete curr;
    }
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

    
    // Delete At Position
    deleteNode(head, tail , 6);
    cout<<"After Deletion:\n";
    printLL(head);


   
    return 0;
     
}