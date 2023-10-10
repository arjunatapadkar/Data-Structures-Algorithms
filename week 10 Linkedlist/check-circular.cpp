


#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

    Node()
    {
        this->next = NULL;
        this->prev = nullptr;
        this->data = 0;
    }

    Node(int x)
    {
        this->data = x;
        this->next = nullptr;
        this->prev = nullptr;
    }
};
int length(Node* &head){

    int count = 0;
    Node* temp = head;
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }
    return count;

}

bool checkCircular(Node* &head){

    if(head == nullptr) return false;

    if(head->next == nullptr) return false;

   Node* temp = head->next;

   while(temp != head){
        temp = temp->next;
   }

   return true;

}

void print(Node* &head){
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n\n";
    

}


int main()
{

    cout << "\n\n\n";
    // Node* head = nullptr;
    Node *head = new Node(10);
    Node *first = new Node(20);
    Node *second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);
    Node* fifth = new Node(60);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = head;

    int k = 4;

    // print(head);
    bool flag = false;

    flag = checkCircular(head);

    if(flag){
        cout << "circular list \n";
    }
    else{
        cout << "Not a circular list\n";
    }

    cout << "\n\n\n";

    return 0;
}