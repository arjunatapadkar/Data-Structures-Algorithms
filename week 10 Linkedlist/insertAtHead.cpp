
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


void insertAtHead(Node* &head, int x){

    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;

}

void printList(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL \n";
}


int main(){

    Node* head = nullptr;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printList(head);

    return 0;
}