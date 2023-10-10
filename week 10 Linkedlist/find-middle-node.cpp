
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

Node* findMiddle(Node* &head){

    int count = 0;

    Node* temp = head;
    while(temp != nullptr){
        temp = temp->next;
        count++; 
    }
    cout << "Nodes - " << count  << "\n";

    temp = head;
    int counter = 1;
    while(counter != (count/2)){                 // for even
    // while(counter != (count/2)+1){              //for odds
          
            temp = temp->next;
            counter++;
    }
    cout << "\n";
    return temp;

}

int main(){

    cout << "\n\n\n";


    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);
    Node* fifth = new Node(60);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout << (findMiddle(head)) -> data << "\n";


    cout << "\n\n\n";



    return 0;
}