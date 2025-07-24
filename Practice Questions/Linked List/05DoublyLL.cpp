#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->prev = NULL;
        this->next = NULL;

    }

    Node(int data){
        this-> data = data;
        this-> prev = NULL;
        this-> next = NULL;
    }
};

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp-> data << "->";
        temp = temp-> next;
    }
}

int getLength(Node* head){
    Node* temp = head;
    int length = 0;
    while(temp != NULL){
        length++;
        temp = temp-> next;
    }

    return length;
}

void insertAtHead(Node*&head, Node* &tail, int data){
    if(head == NULL){
        // LL is empty
        Node* newNode = new Node(data);
        head = newNode; 
        tail = newNode;
    }else{
        //LL is not empty
        Node* newNode = new Node(data);
        newNode -> next = head;
        head ->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node*&head, Node* &tail, int data){
    if(head == NULL){
        // LL is empty
        Node* newNode = new Node(data);
        head = newNode; 
        tail = newNode;
    }else{
        //LL is not empty
        Node* newNode = new Node(data);
        tail -> next = newNode;
        newNode ->prev = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node*&head, Node* &tail, int data, int position){
    if(head == NULL){
        // LL is empty
        Node* newNode = new Node(data);
        head = newNode; 
        tail = newNode;
    }
    else{
        int length = getLength(head);
        if(position == 1){
            insertAtHead(head, tail, data);
        }
        else if(position == length+1){
            insertAtTail(head, tail, data);
        }
        else{
            // insert at middle
            Node* newNode = new Node(data);
            // Step-2 set prev and curr pointer
            Node* prevNode = NULL;
            Node* currNode = head;

            while(position != 1){
                position--;
                prevNode = currNode;
                currNode = currNode->next;
            }

            // step 3- update pointer
            prevNode -> next = newNode;
            newNode -> prev = prevNode;
            newNode -> next = currNode;
            currNode-> prev = newNode;
        }
    }

}

void deleteNode(Node* &head, Node* &tail, int position){

    int length = getLength(head);

    if(head == NULL){
        // LL is empty
        cout<<"Cannot delete, because LL is empty"<< endl;
        return;
    }

    // single node
    if(head == tail){
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }

    if(position == 1){
        // delte from head
        Node* temp = head;
        head = head-> next;
        temp -> next = NULL;
        head -> prev = NULL;
        delete temp;
    }
    else if(position == length){
        // delete from tail
        Node* prevNode = tail -> prev;
        prevNode->next = NULL;
        tail -> prev = NULL;
        delete tail;
        tail = prevNode;
    }
    else{
        // Delete from middle
        // Step- 1 set prevNode / currNode/ nextNode
        Node* prevNode = NULL;
        Node* currNode = head;

        while(position != 1){
            position--;
            prevNode = currNode;
            currNode = currNode -> next;
        }

        Node* nextNode = currNode->next;

        //update pointer
        prevNode-> next = nextNode;
        currNode-> prev = NULL;
        currNode-> next = NULL;
        nextNode-> prev = prevNode;

        delete currNode;    
    }
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    
    cout<<"Printing Linked list:"<<endl;
    printLL(head); 

    // cout<<"\nInsert at tail"<<endl;
    // insertAtTail(head, tail, 220);
    // printLL(head);

    // cout<<"\nInsert at Random positions"<<endl;
    // insertAtPosition(head, tail, 2512, 3);
    // printLL(head);

    // deleting node:
    deleteNode(head, tail, 4);
    cout<<"Printing after deletion"<<endl;
    printLL(head);
}