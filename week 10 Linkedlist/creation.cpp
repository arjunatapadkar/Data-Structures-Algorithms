

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

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL \n";
}

int main(){
    
    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    printList(head);

    return 0;
}