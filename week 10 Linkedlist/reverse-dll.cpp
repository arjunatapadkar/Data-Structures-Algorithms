

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


Node* reverse(Node* &prevNode, Node* &curr){

    // using recursion

    if(curr == nullptr){
        return prevNode;
    }

    Node* temp = curr->next;
    curr->next = prevNode;
    curr->prev = temp;

    // cout << "here" ;
    reverse(curr, temp);


    // using iterative method

    // while(curr != nullptr){

    //     // 
    //     Node* temp = curr->next;
    //     curr->next = prev;
    //     curr->prev = temp;

    //     prev = curr;
    //     curr = temp;
    // }

    // return prevNode;

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

    Node* head = first;
    // head = reverse( head);

    Node* prevNode = nullptr;
    head = reverse( prevNode, head);

    print(head);



    cout << "\n\n\n";
    return 0;
}