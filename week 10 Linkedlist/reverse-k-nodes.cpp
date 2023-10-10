


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
Node* reverseKNodes(Node* &head, int k){

    int l = length(head);

    // empty list
    if(head == nullptr) return head;


    // if nodes greater thean length
    if(k > l) return head;


    // reversable
    Node* prev = nullptr;
    Node* curr = head;
    Node* forward = curr->next;
    int count = 0;
    
    while(count < k){
        forward = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forward;
        count++;
    }

    if(forward != nullptr){
        head->next = reverseKNodes(forward, k);
    }



    return prev;

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


    int k = 4;

    print(head);

    head = reverseKNodes(head, k);

    print(head);
    cout << "\n\n\n";

    return 0;
}