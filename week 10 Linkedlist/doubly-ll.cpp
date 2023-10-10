
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


int main(){

    cout << "\n\n\n";

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    fourth->next = fifth;
    fifth->prev = fourth;

    print(first);

    cout << getLength(first) << "\n";


    cout << "\n\n\n";

    return 0;
}