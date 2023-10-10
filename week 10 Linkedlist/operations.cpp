#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int x){
        this->data = x;
        this->next = NULL;
    }
};

void printList(Node* head){

    Node* temp = head;
    if(head==nullptr){
        cout << "List is Empty!!\n";
        return;
    }

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL \n";
}

int length(Node* &head){

    int count = 0;
    Node* temp = head;
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }
    return count;

}

// inserting in the linkedlist

void insertAtHead(Node* &head, Node* &tail, int x){
    Node* newNode = new Node(x);

    if(head == nullptr){
        head = newNode;
        tail = newNode; 
        return;
    }
    newNode->next = head;
    head = newNode;

}

void insertAtTail(Node* &head, Node* &tail, int x){

    Node* newNode = new Node(x);

    if(head == nullptr){
        head = newNode;
        tail = newNode; 
        return;
    }

    tail->next = newNode;
    tail = newNode;
    
}


void insertAtPosition(Node* &head, Node* &tail, int position, int x){
    int len = length(head);
    // cout << len << "\n";
    if(position <= 0 || position > len+1){
        cout << "Invalid Position \n";
        return;
    }

    // if position == 1
    if(position == 1){
        insertAtHead(head, tail, x);
        return;
    }

    // insert at last position i.e. position == len
    if(position == len + 1){
        insertAtTail(head, tail, x);
        return;
    }

    Node* newNode = new Node(x);
    int count = 1;
    Node* prev = head;
    while(count < position -1){
        prev = prev->next;
        count++;
    }

    newNode->next = prev->next;
    prev->next = newNode;

}


// deleting from the linkedlist

// delete first node
void deleteFirst(Node* &head, Node* &tail){

    // empty linkedlist
    if(head==NULL){
        cout << "Invalid Call\n";
    }

    // linkedlist contains only one node
    if(head->next == NULL){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    // more than one element
    Node* temp = head;
    head = head->next;
    // cout << " deleted " << temp->data << "\n";
    cout << " deleted " << temp->data << "\n";
    delete temp;

}

// delete last node
void deleteLast(Node* &head, Node* &tail){

    // empty linkedlist
    if(head==NULL){
        cout << "Invalid Call\n";
        return;
    }

    // linkedlist contains only one node
    if(head->next == NULL){
        Node* temp = head;
        head = nullptr;
        tail = nullptr;
        delete temp;
        return;
    }

    // cout << "reached till here \n";
    Node* prev = head;
    while(prev->next != tail){
        prev = prev->next;
    }
    
    
    // cout << "prev = " << prev->data << " tail - " << tail->data << "\n";

    Node* temp = prev->next;
    // cout << prev->data << endl;
    tail = prev;
    // cout << tail->data << endl;
     
    prev->next = NULL;
    // printList(head);
    cout << " deleted " << temp->data << "\n";
    
    delete temp;
    // cout << "done \n";
}

void deleteAtPosition(Node* &head, Node* &tail, int position){
    int len = length(head);
    // invalid
    if(position < 1 || position > len){
        cout << "Invalid Position \n";
        return;
    }

    // first
    if(position==1){
        deleteFirst(head, tail);
        return;
    }

    // last
    if(position==len){
        deleteLast(head, tail);
        return;
    }

    // at given position
    int count = 1;
    Node* prev = head;
    while(count < position -1){
        prev = prev->next;
        count++;
    }

    Node* temp = prev->next;
    prev->next = temp->next;
    cout << " deleted " << temp->data << "\n";
    delete temp;
}


int main(){

    Node* head = nullptr;
    Node* tail = nullptr;

    // printList(head);
    insertAtHead(head, tail, 23);
    insertAtHead(head, tail, 24);
    insertAtHead(head, tail, 30);
    insertAtTail(head, tail, 40);
    // printList(head);
    // cout << length(head) << "\n";

    // insertAtPosition(head, tail, 2, 100);
    // printList(head);
    insertAtPosition(head, tail, 5, 200);
    // printList(head);

    // deleteFirst(head, tail);
    // printList(head);

    // cout << "head - " << head->data << " tail - " << tail->data << "\n";


    // deleteLast(head, tail);
    printList(head);
    // cout << "head - " << head->data << " tail - " << tail->data << "\n";

    // cout << length(head) << endl;
    deleteAtPosition(head, tail, 3);
    // printList(head);
    // cout << "head - " << head->data << " tail - " << tail->data << "\n";
    deleteAtPosition(head, tail, 3);
    // printList(head);
    // cout << "head - " << head->data << " tail - " << tail->data << "\n";

    // printList(head);
    deleteAtPosition(head, tail, 3);
    printList(head);
    cout << "head - " << head->data << " tail - " << tail->data << "\n";

    // deleteLast(head, tail);
    // deleteLast(head, tail);

    deleteFirst(head, tail);


    printList(head);
    deleteFirst(head, tail);
    printList(head);
    // cout << "head - " << head->data << " tail - " << tail->data << "\n";

    return 0;
}