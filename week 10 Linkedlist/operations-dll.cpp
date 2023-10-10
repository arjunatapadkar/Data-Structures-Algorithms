
#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    Node(){
        this->next = NULL;
        this->prev = nullptr;
        this->data = 0;
    }

    Node(int x){
        this->data = x;
        this->next = nullptr;
        this->prev = nullptr;
    }


};

void print(Node* &head){
    if(head==nullptr) cout << "Empty List \n";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n\n";
    

}
int getLength(Node* &head){
    Node* temp = head;
    int count = 0;
    while (temp != nullptr) {
       count++;
        temp = temp->next;
    }
    return count;
    

}


// inserting into the doubly linkedlist

void insertAtHead(Node* &head, Node* &tail, int x){
    // insert at head
    
    // if list is empty
    if(head == NULL){
        Node* newNode = new Node(x);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(x);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}


void insertAtTail(Node* &head, Node* &tail, int x){
    // insert at tail 
    
    // if list is empty
    if(head == nullptr){
        Node* newNode = new Node(x);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(x);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
    // cout << tail->data << endl;                         // debugging purpose

}

void insertAtPosition(Node* &head, Node* &tail, int position, int x){
    // insert at any given position 

    int len = getLength(head);

    if(position  < 1 || position > len + 1 ){
        // validity of position
        cout << "enter the valid position" << endl;
        return;
    }
    if(position == 1){
        // position 1 i.e. head
        insertAtHead(head, tail, x);
        return;
    }

    if(position > len){
        // position tail
        insertAtTail(head, tail, x);
        return;
    }

    Node* newNode = new Node(x);

    Node* prevNode = head;
    int count = 1;
    // cout << position << " position" ;                     //debugging
    while(count < position -  1){
        prevNode = prevNode->next;
        count++;
    }
    // cout << " here";                                   // debugging
    
    cout << "prenode " << prevNode -> data << endl;
    newNode->next = prevNode->next;
    prevNode->next->prev = newNode;
    prevNode->next = newNode;
    newNode->prev = prevNode;

    return;
}



// deleting

void deleteAtPosition(Node* &head, Node* &tail, int position){

    // delete at any given position 

    int len = getLength(head);

    if(position  < 1 || position > len ){
        // validity of position
        cout << "enter the valid position" << endl;
        return;
    }

    // position 1   - delete head of the list
    if(position == 1){
        Node* temp = head;
        head = temp->next;
        temp->next->prev = nullptr;
        temp->next = nullptr;
        delete temp;
        return;
    }

    // position len - delete tail of the list
    if(position == len){
        Node* temp = tail;
        tail = temp->prev;
        tail->next = nullptr;
        temp->prev = nullptr;
        delete temp;
        return;
    }


    // delete middle node
    int count = 1;

    Node* prevNode = head;
    while(count < position-1){
        prevNode = prevNode->next;
        count++;
    }

    Node* temp = prevNode->next;
    prevNode->next = temp->next;
    temp->next->prev = prevNode;
    temp->next = nullptr;
    temp->prev = nullptr;
    delete temp;


}









int main(){

    cout << "\n\n\n";

    Node* head = nullptr;
    Node* tail = nullptr;


    

    // print(head);

    // cout << getLength(head) << "\n\n";

    // insertAtTail(head, tail, 80);

    insertAtHead(head, tail, 100);
    insertAtHead(head, tail, 90);
   
    insertAtTail(head, tail, 110);
    insertAtTail(head, tail, 120);

    // cout <<tail->data << endl;
    // print(head);

    insertAtPosition(head, tail, 5, 130);
    insertAtPosition(head, tail, 6, 140);
    insertAtPosition(head, tail, 7, 150);

    print(head);




    // deleting
    deleteAtPosition(head, tail, 1);       
    print(head);


    // deleteAtPosition(head, tail, 1);         
    // print(head);


    // deleteAtPosition(head, tail, 5);         
    // print(head);


    deleteAtPosition(head, tail, 6);         
    print(head);


    deleteAtPosition(head, tail, 3);         
    print(head);





    cout << "\n\n\n";

    return 0;
}